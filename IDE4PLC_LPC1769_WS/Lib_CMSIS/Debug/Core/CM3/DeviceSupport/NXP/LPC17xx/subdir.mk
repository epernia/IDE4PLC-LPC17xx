################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/CM3/DeviceSupport/NXP/LPC17xx/system_LPC17xx.c 

OBJS += \
./Core/CM3/DeviceSupport/NXP/LPC17xx/system_LPC17xx.o 

C_DEPS += \
./Core/CM3/DeviceSupport/NXP/LPC17xx/system_LPC17xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/CM3/DeviceSupport/NXP/LPC17xx/%.o: ../Core/CM3/DeviceSupport/NXP/LPC17xx/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Drivers\include" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Core\CM3\CoreSupport" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Core\CM3\DeviceSupport\NXP\LPC17xx" -O0 -g3 -Wall -c -fmessage-length=0 -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


