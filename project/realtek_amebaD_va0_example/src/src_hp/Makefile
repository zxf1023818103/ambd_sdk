
include $(MAKE_INCLUDE_GEN)

.PHONY: all clean

#*****************************************************************************#
#                               VARIABLES	                              #
#*****************************************************************************#

TFLM_DIR = $(BASEDIR)/project/realtek_amebaD_va0_example/tflm
MODULE_IFLAGS += -I$(TFLM_DIR)
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/cmsis_nn
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/cmsis_nn/Include
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/flatbuffers/include
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/gemmlowp
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/kissfft
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/kissfft/tools
MODULE_IFLAGS += -I$(TFLM_DIR)/third_party/ruy

DIR = $(SRCDIR)
MODULE_IFLAGS += -I$(DIR)./

vpath %.c $(DIR)
vpath %.cpp $(DIR)
#*****************************************************************************#
#                               Source FILE LIST                              #
#*****************************************************************************#
CSRC += $(DIR)/main.c

CXXSRC += $(DIR)/app.cpp
CXXSRC += $(DIR)/evaluate_test.cpp
CXXSRC += $(DIR)/models/hello_world_float_model_data.cpp
CXXSRC += $(DIR)/models/hello_world_int8_model_data.cpp

#*****************************************************************************#
#                               Object FILE LIST                              #
#*****************************************************************************#
C_OBJS = $(CSRC:.c=.o)
CXX_OBJS = $(CXXSRC:.cpp=.o)
OBJS = $(C_OBJS) $(CXX_OBJS)

#*****************************************************************************#
#                        RULES TO GENERATE TARGETS                            #
#*****************************************************************************#
all: CLEAN_OBJS CORE_TARGETS COPY_RAM_OBJS

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

-include $(DEPS)
