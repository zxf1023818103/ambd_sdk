include $(MAKE_INCLUDE_GEN)

.PHONY: all clean

#*****************************************************************************#
#                               VARIABLES	                              #
#*****************************************************************************#
DIR = $(BASEDIR)/project/realtek_amebaD_va0_example/tflm

MODULE_IFLAGS += -I$(DIR)
MODULE_IFLAGS += -I$(DIR)/third_party/cmsis_nn
MODULE_IFLAGS += -I$(DIR)/third_party/cmsis_nn/Include
MODULE_IFLAGS += -I$(DIR)/third_party/flatbuffers/include
MODULE_IFLAGS += -I$(DIR)/third_party/gemmlowp
MODULE_IFLAGS += -I$(DIR)/third_party/kissfft
MODULE_IFLAGS += -I$(DIR)/third_party/kissfft/tools
MODULE_IFLAGS += -I$(DIR)/third_party/ruy

CPPFLAGS += -DCMSIS_NN -DCMSIS_DEVICE_ARM_CORTEX_M_XX_HEADER_FILE=\"rtl8721d.h\"

vpath %.c .
vpath %.cpp .
#*****************************************************************************#
#                               Source FILE LIST                              #
#*****************************************************************************#
CSRC += $(DIR)/third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_get_buffer_sizes_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_get_buffer_sizes_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_z.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_w.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_y.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_x.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_3x3_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_1x1_s8_fast.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_nn_depthwise_conv_s8_core.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_wrapper_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_fast_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_get_buffer_sizes_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_wrapper_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_s8_opt.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_fast_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_get_buffer_sizes_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_get_buffer_sizes_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_1_x_n_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_get_buffer_sizes_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_nn_mat_mult_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_s8_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_1x1_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/LSTMFunctions/arm_lstm_unidirectional_s8_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SoftmaxFunctions/arm_nn_softmax_common_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_s8_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_u8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_step_s8_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_svdf_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nntables.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mul_core_4x_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_update_output_s8_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_update_cell_state_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_calculate_gate_s8_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mul_result_acc_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_q7_to_q15_with_offset.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mul_core_1x_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mult_nt_t_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_padded_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mul_kernel_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ActivationFunctions/arm_nn_activation_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ActivationFunctions/arm_relu_q7.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ActivationFunctions/arm_relu6_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ActivationFunctions/arm_relu_q15.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SVDFunctions/arm_svdf_state_s16_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/SVDFunctions/arm_svdf_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/PoolingFunctions/arm_max_pool_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_get_buffer_sizes_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/PoolingFunctions/arm_max_pool_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_get_buffer_sizes_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_add_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_add_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_mul_s16_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_mul_s8.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_mul_s16.c
CSRC += $(DIR)/third_party/cmsis_nn/Source/ReshapeFunctions/arm_reshape_s8.c
CSRC += $(DIR)/third_party/kissfft/tools/kiss_fftr.c
CSRC += $(DIR)/third_party/kissfft/kiss_fft.c

CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/tensor_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/quantization_util.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/portable_tensor_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/tensor_ctypes.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/common.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/reference/comparisons.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/internal/reference/portable_tensor_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/kernels/kernel_util.cpp
CXXSRC += $(DIR)/tensorflow/lite/core/c/common.cpp
CXXSRC += $(DIR)/tensorflow/lite/core/api/op_resolver.cpp
CXXSRC += $(DIR)/tensorflow/lite/core/api/flatbuffer_conversions.cpp
CXXSRC += $(DIR)/tensorflow/lite/core/api/error_reporter.cpp
CXXSRC += $(DIR)/tensorflow/lite/core/api/tensor_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/test_helpers.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_allocation_info.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/system_setup.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/gather.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/squared_difference.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/depth_to_space.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/assign_variable.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/resize_bilinear.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/select.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/conv_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/neg.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/activations_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/softmax_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/fully_connected_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/reduce.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/mul_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/add_n.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/unpack.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/depthwise_conv.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/svdf.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/softmax.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/pooling.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/conv.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/unidirectional_sequence_lstm.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/mul.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/add.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cmsis_nn/fully_connected.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cast.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/exp.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/sub_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/dequantize.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/round.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/zeros_like.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/concatenation.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/split.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/kernel_runner.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/logistic_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/batch_to_space_nd.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/call_once.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/pad.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/elu.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/sub.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/logical.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/pooling_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/strided_slice.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/prelu_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/ethosu.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/floor_mod.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/activations.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/quantize.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/var_handle.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/logistic.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/detection_postprocess.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/div.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/expand_dims.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/reshape.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/split_v.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/ceil.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/reduce_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/prelu.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/broadcast_args.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/pack.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/comparisons.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/circular_buffer_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/if.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/floor_div.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/kernel_util.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/dequantize_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/transpose.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/read_variable.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/fill.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/space_to_batch_nd.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/add_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/maximum_minimum.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/hard_swish_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/depthwise_conv_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/svdf_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/transpose_conv.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/circular_buffer.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/cumsum.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/squeeze.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/quantize_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/while.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/logical_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/lstm_eval.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/shape.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/resize_nearest_neighbor.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/l2norm.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/lstm_eval_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/l2_pool_2d.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/tanh.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/arg_min_max.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/gather_nd.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/elementwise.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/leaky_relu_common.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/mirror_pad.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/micro_tensor_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/slice.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/space_to_depth.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/floor.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/log_softmax.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/hard_swish.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/broadcast_to.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/kernels/leaky_relu.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_context.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/flatbuffer_utils.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_op_resolver.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_graph.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/tflite_bridge/flatbuffer_conversions_bridge.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/tflite_bridge/micro_error_reporter.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/all_ops_resolver.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_resource_variable.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/test_helper_custom_ops.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_log.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/memory_helpers.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_profiler.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_string.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_allocator.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/recording_micro_allocator.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/fake_micro_context.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/mock_micro_graph.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/memory_planner/greedy_memory_planner.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/memory_planner/linear_memory_planner.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/memory_planner/non_persistent_buffer_planner_shim.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/micro_interpreter.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/cortex_m_generic/debug_log.cpp
CXXSRC += $(DIR)/tensorflow/lite/micro/cortex_m_generic/micro_time.cpp
CXXSRC += $(DIR)/tensorflow/lite/schema/schema_utils.cpp
# CXXSRC += $(DIR)/examples/hello_world/evaluate_test.cpp
# CXXSRC += $(DIR)/examples/hello_world/models/hello_world_float_model_data.cpp
# CXXSRC += $(DIR)/examples/hello_world/models/hello_world_int8_model_data.cpp

#*****************************************************************************#
#                               Object FILE LIST                              #
#*****************************************************************************#
$(foreach src,$(CSRC),$(shell cp -n $(src) $(subst /,_,$(shell realpath $(src) --relative-to=$(DIR)))))
$(foreach src,$(CXXSRC),$(shell cp -n $(src) $(subst /,_,$(shell realpath $(src) --relative-to=$(DIR)))))

RENAMED_CSRC = $(subst /,_,$(shell realpath $(CSRC) --relative-to=$(DIR)))
RENAMED_CXXSRC = $(subst /,_,$(shell realpath $(CXXSRC) --relative-to=$(DIR)))

C_OBJS = $(patsubst %.c,%.o,$(RENAMED_CSRC))
CXX_OBJS = $(patsubst %.cpp,%.o,$(RENAMED_CXXSRC))
OBJS = $(C_OBJS) $(CXX_OBJS)

#*****************************************************************************#
#                        RULES TO GENERATE TARGETS                            #
#*****************************************************************************#
all: CORE_TARGETS COPY_RAM_OBJS

#*****************************************************************************#
#              GENERATE OBJECT FILE 
#*****************************************************************************#
CORE_TARGETS: $(OBJS)

#*****************************************************************************#
#                        RULES TO CLEAN TARGETS                               #
#*****************************************************************************#
clean: CLEAN_OBJS
	$(REMOVE) *.o
	$(REMOVE) *.i
	$(REMOVE) *.ii
	$(REMOVE) *.s
	$(REMOVE) *.su
	$(REMOVE) *.d
	$(REMOVE) *.c
	$(REMOVE) *.cpp

-include $(DEPS)
