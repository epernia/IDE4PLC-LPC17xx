################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../demo_code/basic_io.c \
../demo_code/consoleprint.c 

OBJS += \
./demo_code/basic_io.o \
./demo_code/consoleprint.o 

C_DEPS += \
./demo_code/basic_io.d \
./demo_code/consoleprint.d 


# Each subdirectory must supply rules for building sources it contributes
demo_code/%.o: ../demo_code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Core\CM3\DeviceSupport\NXP\LPC17xx" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Core\CM3\CoreSupport" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\FreeRTOS_Library\include" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\FreeRTOS_Library\portable" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\FreeRTOS_Library\demo_code" -O1 -g3 -Wall -c -fmessage-length=0 -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


