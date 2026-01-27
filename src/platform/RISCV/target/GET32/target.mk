TARGET_MCU        := GET32
TARGET_MCU_FAMILY := RISCV

ARCH_FLAGS         = -march=rv32imc_zicsr -mabi=ilp32
ARCH_FLAGS        += -mcmodel=medany
ARCH_FLAGS        += -msmall-data-limit=0
ARCH_FLAGS        += -mno-relax
ARCH_FLAGS        += -fno-omit-frame-pointer

LINKER_DIR        := $(TARGET_DIR)/link

LD_SCRIPT          = $(LINKER_DIR)/get32.ld
STARTUP_SRC        = $(TARGET_DIR)/startup/crt0.S
MCU_FLASH_SIZE    := 512
HSE_VALUE         ?= 8000000

INCLUDE_DIRS      := \
            $(INCLUDE_DIRS) \
            $(TARGET_DIR)/include 
			
MCU_COMMON_SRC     = \
            $(TARGET_DIR)/source/trap.S 
			
MCU_COMMON_SRC    += $(wildcard $(TARGET_DIR)/source/*.c)

