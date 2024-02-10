################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Program\ C/main.c 

OBJS += \
./Program\ C/main.o 

C_DEPS += \
./Program\ C/main.d 


# Each subdirectory must supply rules for building sources it contributes
Program\ C/main.o: ../Program\ C/main.c Program\ C/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler for Embedded 6'
	armclang.exe --target=aarch64-arm-none-eabi -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


