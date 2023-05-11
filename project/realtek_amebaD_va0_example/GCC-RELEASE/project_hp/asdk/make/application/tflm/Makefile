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

vpath %.c $(DIR)
vpath %.cpp $(DIR)
#*****************************************************************************#
#                               Source FILE LIST                              #
#*****************************************************************************#
CSRC += third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_get_buffer_sizes_s8.c
CSRC += third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_s16.c
CSRC += third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_s8.c
CSRC += third_party/cmsis_nn/Source/FullyConnectedFunctions/arm_fully_connected_get_buffer_sizes_s16.c
CSRC += third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_z.c
CSRC += third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_w.c
CSRC += third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_y.c
CSRC += third_party/cmsis_nn/Source/ConcatenationFunctions/arm_concatenation_s8_x.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_3x3_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_1x1_s8_fast.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_nn_depthwise_conv_s8_core.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_wrapper_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_fast_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_get_buffer_sizes_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_wrapper_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_s8_opt.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_fast_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_get_buffer_sizes_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_get_buffer_sizes_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_1_x_n_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_get_buffer_sizes_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_nn_mat_mult_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_wrapper_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_depthwise_conv_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_nn_mat_mult_kernel_s8_s16.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_1x1_s8.c
CSRC += third_party/cmsis_nn/Source/ConvolutionFunctions/arm_convolve_s8.c
CSRC += third_party/cmsis_nn/Source/LSTMFunctions/arm_lstm_unidirectional_s8_s16.c
CSRC += third_party/cmsis_nn/Source/SoftmaxFunctions/arm_nn_softmax_common_s8.c
CSRC += third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_s16.c
CSRC += third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_s8_s16.c
CSRC += third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_s8.c
CSRC += third_party/cmsis_nn/Source/SoftmaxFunctions/arm_softmax_u8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_step_s8_s16.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_svdf_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nntables.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mul_core_4x_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_update_output_s8_s16.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s16.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_update_cell_state_s16.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_lstm_calculate_gate_s8_s16.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mul_result_acc_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_q7_to_q15_with_offset.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mul_core_1x_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mult_nt_t_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_depthwise_conv_nt_t_padded_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_mat_mul_kernel_s16.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s8.c
CSRC += third_party/cmsis_nn/Source/NNSupportFunctions/arm_nn_vec_mat_mult_t_s16.c
CSRC += third_party/cmsis_nn/Source/ActivationFunctions/arm_nn_activation_s16.c
CSRC += third_party/cmsis_nn/Source/ActivationFunctions/arm_relu_q7.c
CSRC += third_party/cmsis_nn/Source/ActivationFunctions/arm_relu6_s8.c
CSRC += third_party/cmsis_nn/Source/ActivationFunctions/arm_relu_q15.c
CSRC += third_party/cmsis_nn/Source/SVDFunctions/arm_svdf_state_s16_s8.c
CSRC += third_party/cmsis_nn/Source/SVDFunctions/arm_svdf_s8.c
CSRC += third_party/cmsis_nn/Source/PoolingFunctions/arm_max_pool_s16.c
CSRC += third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_get_buffer_sizes_s8.c
CSRC += third_party/cmsis_nn/Source/PoolingFunctions/arm_max_pool_s8.c
CSRC += third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_get_buffer_sizes_s16.c
CSRC += third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_s8.c
CSRC += third_party/cmsis_nn/Source/PoolingFunctions/arm_avgpool_s16.c
CSRC += third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_add_s16.c
CSRC += third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_add_s8.c
CSRC += third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_mul_s16_s8.c
CSRC += third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_mul_s8.c
CSRC += third_party/cmsis_nn/Source/BasicMathFunctions/arm_elementwise_mul_s16.c
CSRC += third_party/cmsis_nn/Source/ReshapeFunctions/arm_reshape_s8.c
CSRC += third_party/kissfft/tools/kiss_fftr.c
CSRC += third_party/kissfft/kiss_fft.c

CXXSRC += tensorflow/lite/kernels/internal/tensor_utils.cpp
CXXSRC += tensorflow/lite/kernels/internal/quantization_util.cpp
CXXSRC += tensorflow/lite/kernels/internal/portable_tensor_utils.cpp
CXXSRC += tensorflow/lite/kernels/internal/tensor_ctypes.cpp
CXXSRC += tensorflow/lite/kernels/internal/common.cpp
CXXSRC += tensorflow/lite/kernels/internal/reference/comparisons.cpp
CXXSRC += tensorflow/lite/kernels/internal/reference/portable_tensor_utils.cpp
CXXSRC += tensorflow/lite/kernels/kernel_util.cpp
CXXSRC += tensorflow/lite/core/c/common.cpp
CXXSRC += tensorflow/lite/core/api/op_resolver.cpp
CXXSRC += tensorflow/lite/core/api/flatbuffer_conversions.cpp
CXXSRC += tensorflow/lite/core/api/error_reporter.cpp
CXXSRC += tensorflow/lite/core/api/tensor_utils.cpp
CXXSRC += tensorflow/lite/micro/test_helpers.cpp
CXXSRC += tensorflow/lite/micro/micro_allocation_info.cpp
CXXSRC += tensorflow/lite/micro/system_setup.cpp
CXXSRC += tensorflow/lite/micro/kernels/gather.cpp
CXXSRC += tensorflow/lite/micro/kernels/squared_difference.cpp
CXXSRC += tensorflow/lite/micro/kernels/depth_to_space.cpp
CXXSRC += tensorflow/lite/micro/kernels/assign_variable.cpp
CXXSRC += tensorflow/lite/micro/kernels/resize_bilinear.cpp
CXXSRC += tensorflow/lite/micro/kernels/select.cpp
CXXSRC += tensorflow/lite/micro/kernels/conv_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/neg.cpp
CXXSRC += tensorflow/lite/micro/kernels/activations_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/softmax_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/fully_connected_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/reduce.cpp
CXXSRC += tensorflow/lite/micro/kernels/mul_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/add_n.cpp
CXXSRC += tensorflow/lite/micro/kernels/unpack.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/depthwise_conv.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/svdf.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/softmax.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/pooling.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/conv.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/unidirectional_sequence_lstm.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/mul.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/add.cpp
CXXSRC += tensorflow/lite/micro/kernels/cmsis_nn/fully_connected.cpp
CXXSRC += tensorflow/lite/micro/kernels/cast.cpp
CXXSRC += tensorflow/lite/micro/kernels/exp.cpp
CXXSRC += tensorflow/lite/micro/kernels/sub_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/dequantize.cpp
CXXSRC += tensorflow/lite/micro/kernels/round.cpp
CXXSRC += tensorflow/lite/micro/kernels/zeros_like.cpp
CXXSRC += tensorflow/lite/micro/kernels/concatenation.cpp
CXXSRC += tensorflow/lite/micro/kernels/split.cpp
CXXSRC += tensorflow/lite/micro/kernels/kernel_runner.cpp
CXXSRC += tensorflow/lite/micro/kernels/logistic_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/batch_to_space_nd.cpp
CXXSRC += tensorflow/lite/micro/kernels/call_once.cpp
CXXSRC += tensorflow/lite/micro/kernels/pad.cpp
CXXSRC += tensorflow/lite/micro/kernels/elu.cpp
CXXSRC += tensorflow/lite/micro/kernels/sub.cpp
CXXSRC += tensorflow/lite/micro/kernels/logical.cpp
CXXSRC += tensorflow/lite/micro/kernels/pooling_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/strided_slice.cpp
CXXSRC += tensorflow/lite/micro/kernels/prelu_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/ethosu.cpp
CXXSRC += tensorflow/lite/micro/kernels/floor_mod.cpp
CXXSRC += tensorflow/lite/micro/kernels/activations.cpp
CXXSRC += tensorflow/lite/micro/kernels/quantize.cpp
CXXSRC += tensorflow/lite/micro/kernels/var_handle.cpp
CXXSRC += tensorflow/lite/micro/kernels/logistic.cpp
CXXSRC += tensorflow/lite/micro/kernels/detection_postprocess.cpp
CXXSRC += tensorflow/lite/micro/kernels/div.cpp
CXXSRC += tensorflow/lite/micro/kernels/expand_dims.cpp
CXXSRC += tensorflow/lite/micro/kernels/reshape.cpp
CXXSRC += tensorflow/lite/micro/kernels/split_v.cpp
CXXSRC += tensorflow/lite/micro/kernels/ceil.cpp
CXXSRC += tensorflow/lite/micro/kernels/reduce_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/prelu.cpp
CXXSRC += tensorflow/lite/micro/kernels/broadcast_args.cpp
CXXSRC += tensorflow/lite/micro/kernels/pack.cpp
CXXSRC += tensorflow/lite/micro/kernels/comparisons.cpp
CXXSRC += tensorflow/lite/micro/kernels/circular_buffer_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/if.cpp
CXXSRC += tensorflow/lite/micro/kernels/floor_div.cpp
CXXSRC += tensorflow/lite/micro/kernels/kernel_util.cpp
CXXSRC += tensorflow/lite/micro/kernels/dequantize_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/transpose.cpp
CXXSRC += tensorflow/lite/micro/kernels/read_variable.cpp
CXXSRC += tensorflow/lite/micro/kernels/fill.cpp
CXXSRC += tensorflow/lite/micro/kernels/space_to_batch_nd.cpp
CXXSRC += tensorflow/lite/micro/kernels/add_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/maximum_minimum.cpp
CXXSRC += tensorflow/lite/micro/kernels/hard_swish_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/depthwise_conv_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/svdf_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/transpose_conv.cpp
CXXSRC += tensorflow/lite/micro/kernels/circular_buffer.cpp
CXXSRC += tensorflow/lite/micro/kernels/cumsum.cpp
CXXSRC += tensorflow/lite/micro/kernels/squeeze.cpp
CXXSRC += tensorflow/lite/micro/kernels/quantize_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/while.cpp
CXXSRC += tensorflow/lite/micro/kernels/logical_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/lstm_eval.cpp
CXXSRC += tensorflow/lite/micro/kernels/shape.cpp
CXXSRC += tensorflow/lite/micro/kernels/resize_nearest_neighbor.cpp
CXXSRC += tensorflow/lite/micro/kernels/l2norm.cpp
CXXSRC += tensorflow/lite/micro/kernels/lstm_eval_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/l2_pool_2d.cpp
CXXSRC += tensorflow/lite/micro/kernels/tanh.cpp
CXXSRC += tensorflow/lite/micro/kernels/arg_min_max.cpp
CXXSRC += tensorflow/lite/micro/kernels/gather_nd.cpp
CXXSRC += tensorflow/lite/micro/kernels/elementwise.cpp
CXXSRC += tensorflow/lite/micro/kernels/leaky_relu_common.cpp
CXXSRC += tensorflow/lite/micro/kernels/mirror_pad.cpp
CXXSRC += tensorflow/lite/micro/kernels/micro_tensor_utils.cpp
CXXSRC += tensorflow/lite/micro/kernels/slice.cpp
CXXSRC += tensorflow/lite/micro/kernels/space_to_depth.cpp
CXXSRC += tensorflow/lite/micro/kernels/floor.cpp
CXXSRC += tensorflow/lite/micro/kernels/log_softmax.cpp
CXXSRC += tensorflow/lite/micro/kernels/hard_swish.cpp
CXXSRC += tensorflow/lite/micro/kernels/broadcast_to.cpp
CXXSRC += tensorflow/lite/micro/kernels/leaky_relu.cpp
CXXSRC += tensorflow/lite/micro/micro_context.cpp
CXXSRC += tensorflow/lite/micro/micro_utils.cpp
CXXSRC += tensorflow/lite/micro/flatbuffer_utils.cpp
CXXSRC += tensorflow/lite/micro/micro_op_resolver.cpp
CXXSRC += tensorflow/lite/micro/micro_graph.cpp
CXXSRC += tensorflow/lite/micro/tflite_bridge/flatbuffer_conversions_bridge.cpp
CXXSRC += tensorflow/lite/micro/tflite_bridge/micro_error_reporter.cpp
CXXSRC += tensorflow/lite/micro/all_ops_resolver.cpp
CXXSRC += tensorflow/lite/micro/micro_resource_variable.cpp
CXXSRC += tensorflow/lite/micro/arena_allocator/recording_single_arena_buffer_allocator.cpp
CXXSRC += tensorflow/lite/micro/arena_allocator/single_arena_buffer_allocator.cpp
CXXSRC += tensorflow/lite/micro/arena_allocator/non_persistent_arena_buffer_allocator.cpp
CXXSRC += tensorflow/lite/micro/arena_allocator/persistent_arena_buffer_allocator.cpp
CXXSRC += tensorflow/lite/micro/test_helper_custom_ops.cpp
CXXSRC += tensorflow/lite/micro/micro_log.cpp
CXXSRC += tensorflow/lite/micro/memory_helpers.cpp
CXXSRC += tensorflow/lite/micro/micro_profiler.cpp
CXXSRC += tensorflow/lite/micro/micro_string.cpp
CXXSRC += tensorflow/lite/micro/micro_allocator.cpp
CXXSRC += tensorflow/lite/micro/recording_micro_allocator.cpp
CXXSRC += tensorflow/lite/micro/fake_micro_context.cpp
CXXSRC += tensorflow/lite/micro/mock_micro_graph.cpp
CXXSRC += tensorflow/lite/micro/memory_planner/greedy_memory_planner.cpp
CXXSRC += tensorflow/lite/micro/memory_planner/linear_memory_planner.cpp
CXXSRC += tensorflow/lite/micro/memory_planner/non_persistent_buffer_planner_shim.cpp
CXXSRC += tensorflow/lite/micro/micro_interpreter.cpp
CXXSRC += tensorflow/lite/micro/cortex_m_generic/debug_log.cpp
CXXSRC += tensorflow/lite/micro/cortex_m_generic/micro_time.cpp
CXXSRC += tensorflow/lite/schema/schema_utils.cpp
# CXXSRC += examples/hello_world/evaluate_test.cpp
# CXXSRC += examples/hello_world/models/hello_world_float_model_data.cpp
# CXXSRC += examples/hello_world/models/hello_world_int8_model_data.cpp

#*****************************************************************************#
#                               Object FILE LIST                              #
#*****************************************************************************#
C_OBJS = $(patsubst %.c,%.o,$(CSRC))
CXX_OBJS = $(patsubst %.cpp,%.o,$(CXXSRC))
OBJS = $(C_OBJS) $(CXX_OBJS)

STATIC_LIB = libtensorflow_microlite.lib

#*****************************************************************************#
#              RULES TO GENERATE OBJECT FILE FROM .C FILE                     #
#*****************************************************************************#
%.o:%.c
	mkdir -p $(shell dirname $@) && cd $(shell dirname $@) && $(CC) -Wstrict-prototypes $(GLOBAL_CFLAGS) $(MODULE_IFLAGS) $< -o $(shell basename $@)

#*****************************************************************************#
#              RULES TO GENERATE OBJECT FILE FROM .CPP FILE                   #
#*****************************************************************************#
%.o:%.cpp
	mkdir -p $(shell dirname $@) && cd $(shell dirname $@) && $(CC) -ffunction-sections $(CPPFLAGS) $(MODULE_IFLAGS) $< -o $(shell basename $@)

#*****************************************************************************#
#                        RULES TO GENERATE TARGETS                            #
#*****************************************************************************#
all: CORE_TARGETS
	$(AR) rvs $(STATIC_LIB) $(OBJS)
	$(FROMELF) --strip-debug $(STATIC_LIB)

#*****************************************************************************#
#              GENERATE OBJECT FILE 
#*****************************************************************************#
CORE_TARGETS: $(OBJS)

#*****************************************************************************#
#                        RULES TO CLEAN TARGETS                               #
#*****************************************************************************#
clean: CLEAN_OBJS
	$(REMOVE) -rf tensorflow
	$(REMOVE) -rf third_party
	$(REMOVE) *.lib

-include $(DEPS)
