/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include <cstdint>
#include <cstdlib>
#include <memory>
#include <array>

#include "tensorflow/lite/c/common.h"
#include "micro_benchmark.h"
#include "tensorflow/lite/micro/kernels/fully_connected.h"
#include "tensorflow/lite/micro/kernels/softmax.h"
#include "tensorflow/lite/micro/kernels/svdf.h"
#include "tensorflow/lite/micro/micro_log.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/micro/micro_profiler.h"
#include "keyword_scrambled_model_data.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "FreeRTOS.h"

/*
 * Keyword Spotting Benchmark for performance optimizations. The model used in
 * this benchmark only serves as a reference. The values assigned to the model
 * weights and parameters are not representative of the original model.
 */

using KeywordBenchmarkRunner = tflite::MicroBenchmarkRunner<int16_t>;
using KeywordOpResolver = tflite::MicroMutableOpResolver<6>;

// Create an area of memory to use for input, output, and intermediate arrays.
// Align arena to 16 bytes to avoid alignment warnings on certain platforms.
constexpr int kTensorArenaSize = 2048;
alignas(16) uint8_t tensor_arena[kTensorArenaSize];

void KeywordRunNIerations(int iterations, const char* tag,
                          KeywordBenchmarkRunner& benchmark_runner,
                          tflite::MicroProfiler& profiler) {
  int32_t ticks = 0;
  for (int i = 0; i < iterations; ++i) {
    benchmark_runner.SetRandomInput(i);
    profiler.ClearEvents();
    benchmark_runner.RunSingleIteration();
    ticks += profiler.GetTotalTicks();
  }
  MicroPrintf("%s took %d ticks (%d ms)", tag, ticks, tflite::TicksToMs(ticks));
}


void keyword_benchmark(void) {
  tflite::InitializeTarget();
  std::shared_ptr<tflite::MicroProfiler> profiler = std::make_shared<tflite::MicroProfiler>();

  uint32_t event_handle = profiler->BeginEvent("InitializeKeywordRunner");

  auto op_resolver = std::make_shared<KeywordOpResolver>();
  op_resolver->AddFullyConnected(tflite::Register_FULLY_CONNECTED_INT8());
  op_resolver->AddQuantize();
  op_resolver->AddSoftmax(tflite::Register_SOFTMAX_INT8_INT16());
  op_resolver->AddSvdf(tflite::Register_SVDF_INT8());

  auto benchmark_runner = std::make_shared<KeywordBenchmarkRunner>((uint8_t*)g_keyword_scrambled_model_data, op_resolver.get(), (uint8_t*)tensor_arena, kTensorArenaSize, profiler.get());

  profiler->EndEvent(event_handle);
  profiler->Log();
  MicroPrintf("");  // null MicroPrintf serves as a newline.

  KeywordRunNIerations(1, "KeywordRunNIerations(1)", *benchmark_runner,
                               *profiler);
  profiler->Log();
  MicroPrintf("");  // null MicroPrintf serves as a newline.

  KeywordRunNIerations(10, "KeywordRunNIerations(10)",
                               *benchmark_runner, *profiler);
  MicroPrintf("");  // null MicroPrintf serves as a newline.

  benchmark_runner->PrintAllocations();
}
