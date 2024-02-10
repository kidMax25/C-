################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Program\ A/main.c 

OBJS += \
./Program\ A/main.o 

C_DEPS += \
./Program\ A/main.d 


# Each subdirectory must supply rules for building sources it contributes
Program\ A/main.o: ../Program\ A/main.c Program\ A/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler for Embedded 6'
	armclang.exe --target=aarch64-arm-none-eabi -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


