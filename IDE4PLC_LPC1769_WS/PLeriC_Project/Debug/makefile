################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: PLeriC_Project.axf

# Tool invocations
PLeriC_Project.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\Lib_CMSIS\Debug" -L"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\PLeriC_Library\Debug" -L"C:\IDE4PLC.app\Contents\Resources\IDE4PLC_LPC1769_WS\FreeRTOS_Library\Debug" -Xlinker --gc-sections -Xlinker -Map=PLeriC_Project.map -mcpu=cortex-m3 -mthumb -T "PLeriC_Project_Debug.ld" -o "PLeriC_Project.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) PLeriC_Project.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size PLeriC_Project.axf; # arm-none-eabi-objcopy -O ihex PLeriC_Project.axf PLeriC_Project.hex ;
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
