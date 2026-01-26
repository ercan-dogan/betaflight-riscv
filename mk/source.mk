PG_SRC = 

COMMON_SRC = 

ifneq ($(SIMULATOR_BUILD),yes)

COMMON_SRC += 

RX_SRC = 

FLASH_SRC += 

SDCARD_SRC += 

INCLUDE_DIRS += $(FATFS_DIR)
VPATH        := $(VPATH):$(FATFS_DIR)

# Gyro driver files that only contain initialization and configuration code - not runtime code
SIZE_OPTIMISED_SRC += 


SPEED_OPTIMISED_SRC += 

endif

COMMON_DEVICE_SRC = $(CMSIS_SRC) $(DEVICE_STDPERIPH_SRC)

COMMON_SRC += $(CONFIG_SRC) $(PG_SRC) $(COMMON_DEVICE_SRC) $(RX_SRC)

ifeq ($(EXST),yes)
TARGET_FLAGS += -DUSE_EXST
endif

ifeq ($(RAM_BASED),yes)
TARGET_FLAGS += -DUSE_EXST -DCONFIG_IN_RAM -DRAMBASED
endif

ifeq ($(SIMULATOR_BUILD),yes)
TARGET_FLAGS += -DSIMULATOR_BUILD
endif

SPEED_OPTIMISED_SRC += \
            $(CMSIS_SRC) \
            $(DEVICE_STDPERIPH_SRC) \

SIZE_OPTIMISED_SRC += 

# check if target.mk supplied
SRC := $(STARTUP_SRC) $(MCU_COMMON_SRC) $(TARGET_SRC) $(VARIANT_SRC)

# Files that should not be optimized, useful for debugging IMPRECISE cpu faults.
# Specify FULL PATH, e.g. "./lib/main/STM32F7/Drivers/STM32F7xx_HAL_Driver/Src/stm32f7xx_ll_sdmmc.c"
NOT_OPTIMISED_SRC := $(NOT_OPTIMISED_SRC) \

ifneq ($(DSP_LIB),)

INCLUDE_DIRS += $(DSP_LIB)/Include
SRC += $(wildcard $(DSP_LIB)/Source/*/*.S)

endif

SRC += $(FLASH_SRC) $(MSC_SRC) $(SDCARD_SRC) $(COMMON_SRC)

#excludes
SRC   := $(filter-out $(MCU_EXCLUDES), $(SRC))

SRC += $(VCP_SRC)

# end target specific make file checks

# Search path and source files for the Open Location Code library
OLC_DIR := google/olc

ifneq ($(OLC_DIR),)
INCLUDE_DIRS += $(LIB_MAIN_DIR)/$(OLC_DIR)
SRC += 
SIZE_OPTIMISED_SRC += 
endif
