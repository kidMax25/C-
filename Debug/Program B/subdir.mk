################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Program\ B/main.c 

OBJS += \
./Program\ B/main.o 

C_DEPS += \
./Program\ B/main.d 


# Each subdirectory must supply rules for building sources it contributes
Program\ B/main.o: ../Program\ B/main.c Program\ B/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Arm C Compiler for Embedded 6'
	armclang.exe --target=aarch64-arm-none-eabi -O0 -g -MD -MP -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


