################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Program\ D/main.c 

OBJS += \
./Program\ D/main.o 

C_DEPS += \
./Program\ D/main.d 


# Each subdirectory must supply rules for building sources it contributes
Program\ D/main.o: ../Program\ D/main.c Program\ D/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler for Embedded 6'
	armclang.exe --target=aarch64-arm-none-eabi -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


