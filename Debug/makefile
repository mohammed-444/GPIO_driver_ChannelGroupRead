################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include source_main/MCAL/timer/subdir.mk
-include source_main/MCAL/spi/subdir.mk
-include source_main/MCAL/pwm/subdir.mk
-include source_main/MCAL/gpio/subdir.mk
-include source_main/MCAL/EXT_INTERRUPT/subdir.mk
-include source_main/ECUAL/lcd/subdir.mk
-include source_main/ECUAL/dc_motor/subdir.mk
-include source_main/ECUAL/button/subdir.mk
-include source_main/ECUAL/TC72/subdir.mk
-include source_main/APP/subdir.mk
-include source_main/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := GPIO_driver_ChannelGroupRead
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
GPIO_driver_ChannelGroupRead.lss \
GPIO_driver_ChannelGroupRead.lss \
GPIO_driver_ChannelGroupRead.lss \
GPIO_driver_ChannelGroupRead.lss \

SIZEDUMMY += \
sizedummy \
sizedummy \
sizedummy \
sizedummy \


# All Target
all: main-build

# Main-build Target
main-build: GPIO_driver_ChannelGroupRead.elf secondary-outputs

# Tool invocations
GPIO_driver_ChannelGroupRead.elf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,GPIO_driver_ChannelGroupRead.map -mmcu=atmega16 -o "GPIO_driver_ChannelGroupRead.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

GPIO_driver_ChannelGroupRead.lss: GPIO_driver_ChannelGroupRead.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S GPIO_driver_ChannelGroupRead.elf  >"GPIO_driver_ChannelGroupRead.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: GPIO_driver_ChannelGroupRead.elf makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 GPIO_driver_ChannelGroupRead.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) GPIO_driver_ChannelGroupRead.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents main-build

-include ../makefile.targets
