################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/source/debug_frmwrk.c \
../Drivers/source/lpc17xx_adc.c \
../Drivers/source/lpc17xx_can.c \
../Drivers/source/lpc17xx_clkpwr.c \
../Drivers/source/lpc17xx_dac.c \
../Drivers/source/lpc17xx_emac.c \
../Drivers/source/lpc17xx_exti.c \
../Drivers/source/lpc17xx_gpdma.c \
../Drivers/source/lpc17xx_gpio.c \
../Drivers/source/lpc17xx_i2c.c \
../Drivers/source/lpc17xx_i2s.c \
../Drivers/source/lpc17xx_libcfg_default.c \
../Drivers/source/lpc17xx_mcpwm.c \
../Drivers/source/lpc17xx_nvic.c \
../Drivers/source/lpc17xx_pinsel.c \
../Drivers/source/lpc17xx_pwm.c \
../Drivers/source/lpc17xx_qei.c \
../Drivers/source/lpc17xx_rit.c \
../Drivers/source/lpc17xx_rtc.c \
../Drivers/source/lpc17xx_spi.c \
../Drivers/source/lpc17xx_ssp.c \
../Drivers/source/lpc17xx_systick.c \
../Drivers/source/lpc17xx_timer.c \
../Drivers/source/lpc17xx_uart.c \
../Drivers/source/lpc17xx_wdt.c 

OBJS += \
./Drivers/source/debug_frmwrk.o \
./Drivers/source/lpc17xx_adc.o \
./Drivers/source/lpc17xx_can.o \
./Drivers/source/lpc17xx_clkpwr.o \
./Drivers/source/lpc17xx_dac.o \
./Drivers/source/lpc17xx_emac.o \
./Drivers/source/lpc17xx_exti.o \
./Drivers/source/lpc17xx_gpdma.o \
./Drivers/source/lpc17xx_gpio.o \
./Drivers/source/lpc17xx_i2c.o \
./Drivers/source/lpc17xx_i2s.o \
./Drivers/source/lpc17xx_libcfg_default.o \
./Drivers/source/lpc17xx_mcpwm.o \
./Drivers/source/lpc17xx_nvic.o \
./Drivers/source/lpc17xx_pinsel.o \
./Drivers/source/lpc17xx_pwm.o \
./Drivers/source/lpc17xx_qei.o \
./Drivers/source/lpc17xx_rit.o \
./Drivers/source/lpc17xx_rtc.o \
./Drivers/source/lpc17xx_spi.o \
./Drivers/source/lpc17xx_ssp.o \
./Drivers/source/lpc17xx_systick.o \
./Drivers/source/lpc17xx_timer.o \
./Drivers/source/lpc17xx_uart.o \
./Drivers/source/lpc17xx_wdt.o 

C_DEPS += \
./Drivers/source/debug_frmwrk.d \
./Drivers/source/lpc17xx_adc.d \
./Drivers/source/lpc17xx_can.d \
./Drivers/source/lpc17xx_clkpwr.d \
./Drivers/source/lpc17xx_dac.d \
./Drivers/source/lpc17xx_emac.d \
./Drivers/source/lpc17xx_exti.d \
./Drivers/source/lpc17xx_gpdma.d \
./Drivers/source/lpc17xx_gpio.d \
./Drivers/source/lpc17xx_i2c.d \
./Drivers/source/lpc17xx_i2s.d \
./Drivers/source/lpc17xx_libcfg_default.d \
./Drivers/source/lpc17xx_mcpwm.d \
./Drivers/source/lpc17xx_nvic.d \
./Drivers/source/lpc17xx_pinsel.d \
./Drivers/source/lpc17xx_pwm.d \
./Drivers/source/lpc17xx_qei.d \
./Drivers/source/lpc17xx_rit.d \
./Drivers/source/lpc17xx_rtc.d \
./Drivers/source/lpc17xx_spi.d \
./Drivers/source/lpc17xx_ssp.d \
./Drivers/source/lpc17xx_systick.d \
./Drivers/source/lpc17xx_timer.d \
./Drivers/source/lpc17xx_uart.d \
./Drivers/source/lpc17xx_wdt.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/source/%.o: ../Drivers/source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Drivers\include" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Core\CM3\CoreSupport" -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Core\CM3\DeviceSupport\NXP\LPC17xx" -O0 -g3 -Wall -c -fmessage-length=0 -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


