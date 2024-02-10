################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := clean

# All of the sources participating in the build are defined here
-include sources.mk
-include Program\ D/subdir.mk
-include Program\ C/subdir.mk
-include Program\ B/subdir.mk
-include Program\ A/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Programmes
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: Programmes.axf

# Tool invocations
Programmes.axf: $(OBJS)  $(USER_OBJS) $(LIBS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: Arm Linker 6'
	armlink.exe --info=sizes -o "Programmes.axf" "Program A/main.o" "Program B/main.o" "Program C/main.o" "Program D/main.o" $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES) "Program A/main.o" "Program B/main.o" "Program C/main.o" "Program D/main.o" "Program A/main.d" "Program B/main.d" "Program C/main.d" "Program D/main.d" Programmes.axf 
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
