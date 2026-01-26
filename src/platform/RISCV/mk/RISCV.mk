# Tool names (defer prefix resolution for per-platform overrides like SITL)
CROSS_CC     = $(CCACHE) $(RISCV_SDK_PREFIX)gcc
CROSS_CXX    = $(CCACHE) $(RISCV_SDK_PREFIX)g++
CROSS_GDB    = $(RISCV_SDK_PREFIX)gdb
OBJCOPY      = $(RISCV_SDK_PREFIX)objcopy
OBJDUMP      = $(RISCV_SDK_PREFIX)objdump
READELF      = $(RISCV_SDK_PREFIX)readelf
SIZE         = $(RISCV_SDK_PREFIX)size
DFUSE-PACK   = 

LD_FLAGS     = -lm \
              -nostartfiles \
              --specs=nano.specs \
              -lc \
              -lnosys \
              $(ARCH_FLAGS) \
              $(LTO_FLAGS) \
              $(DEBUG_FLAGS) \
              -static \
              -Wl,-gc-sections,-Map,$(TARGET_MAP) \
              -Wl,-L$(LINKER_DIR) \
              -Wl,--cref \
              -Wl,--print-memory-usage \
              -T$(LD_SCRIPT) \
               $(EXTRA_LD_FLAGS)