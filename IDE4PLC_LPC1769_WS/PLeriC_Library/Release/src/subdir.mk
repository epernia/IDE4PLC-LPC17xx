################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/PLC_Hardware.c \
../src/PLC_IL_Instructions.c \
../src/PLC_Registers.c \
../src/PLC_StdFunctionBlocks.c \
../src/PLC_StdFunctions.c \
../src/PLC_UserFunctionBlocks.c \
../src/PLC_UserFunctions.c \
../src/PLC_UserPrograms.c \
../src/PLC_UserTasks.c \
../src/PLeriC.c 

OBJS += \
./src/PLC_Hardware.o \
./src/PLC_IL_Instructions.o \
./src/PLC_Registers.o \
./src/PLC_StdFunctionBlocks.o \
./src/PLC_StdFunctions.o \
./src/PLC_UserFunctionBlocks.o \
./src/PLC_UserFunctions.o \
./src/PLC_UserPrograms.o \
./src/PLC_UserTasks.o \
./src/PLeriC.o 

C_DEPS += \
./src/PLC_Hardware.d \
./src/PLC_IL_Instructions.d \
./src/PLC_Registers.d \
./src/PLC_StdFunctionBlocks.d \
./src/PLC_StdFunctions.d \
./src/PLC_UserFunctionBlocks.d \
./src/PLC_UserFunctions.d \
./src/PLC_UserPrograms.d \
./src/PLC_UserTasks.d \
./src/PLeriC.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DNDEBUG -D__CODE_RED -I"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\PLeriC_Library\inc" -O2 -Os -g -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


