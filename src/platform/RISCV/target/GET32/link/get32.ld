SEARCH_DIR(.)
__DYNAMIC  =  0;
OUTPUT_FORMAT("elf32-littleriscv")
OUTPUT_ARCH(riscv)
ENTRY(_start)

_MIN_STACK_SIZE = DEFINED(_MIN_STACK_SIZE)  ? _MIN_STACK_SIZE   : 4K;
_HEAP_SIZE      = DEFINED(_HEAP_SIZE)       ? _HEAP_SIZE        : 0K;
_ROM_SIZE       = DEFINED(_ROM_SIZE)        ? _ROM_SIZE         : 512K;
_RAM_SIZE       = DEFINED(_RAM_SIZE)        ? _RAM_SIZE         : 128K;

MEMORY
{
    rom   (rx)  : ORIGIN = 0x00000000, LENGTH = _ROM_SIZE
    ram   (rwx) : ORIGIN = 0x20000000, LENGTH = _RAM_SIZE
}

SECTIONS
{
    .text : {
        _text = .;
        KEEP(*(.init));
        KEEP(*(.trap));
        KEEP(*(.vectors));
        KEEP(*(.isr));
        KEEP(*(.system));
        KEEP(*(.start));
        *(.text.hot .text.hot.*);
        *(.text .text.*);
        *(.text.cold .text.cold.*);
        . = ALIGN(4);
        _etext = .;
        
        _rodata = .;
        *(.srodata);
        *(SORT_BY_ALIGNMENT(.srodata.*));
        *(.gnu.linkonce.sr.*);
        *(.rodata);
        *(SORT_BY_ALIGNMENT(.rodata.*));
        . = ALIGN(4);
        _erodata = .;
    } > rom

    .bss (NOLOAD) :
    {
        _sbss = .;
        *(.sbss);
        *(SORT_BY_ALIGNMENT(.sbss.*));
        _bss = .;
        *(.bss);
        *(SORT_BY_ALIGNMENT(.bss.*));
        . = ALIGN(4);
        _ebss = .;
    } > ram

    .data :
    {
        _sdata = .;
        *(.sdata);
        *(SORT_BY_ALIGNMENT(.sdata.*));
        *(SORT_BY_ALIGNMENT(.gnu.linkonce.s.*));
        _data = .;
        *(.data);
        *(SORT_BY_ALIGNMENT(.data.*));
        *(SORT_BY_ALIGNMENT(.patchtable.*));
        *(SORT_BY_ALIGNMENT(.gnu.linkonce.d.*));
        . = ALIGN(4);
        _edata = .;
    } > ram AT > rom
    _sidata = LOADADDR(.data);

    .heap (NOLOAD) :
    {
        _heap_bottom = .;
        . += _HEAP_SIZE;
        . = ALIGN(4);
        _heap_top = .;
    } > ram
        
    _stack_bottom = ADDR(.heap) + SIZEOF(.heap);
    _stack_top = ORIGIN(ram) + LENGTH(ram);
    _stack_size = _stack_top - _stack_bottom;
    HIDDEN(temp = ASSERT(_MIN_STACK_SIZE <= _stack_size, "STACK kapasitesi asildi."));
    _estack = _stack_bottom;
    
    .pg_reg : 
    {
        PROVIDE_HIDDEN (__pg_registry_start = .);
        KEEP (*(.pg_registry));
        KEEP (*(SORT(.pg_registry.*)));
        PROVIDE_HIDDEN (__pg_registry_end = .);
    } > rom

    .pg_reset : 
    {
        PROVIDE_HIDDEN (__pg_resetdata_start = .);
        KEEP (*(.pg_resetdata));
        PROVIDE_HIDDEN (__pg_resetdata_end = .);
    } > rom

    .config (NOLOAD) : 
    {
        __config_start = .;
        . += 2048;
        __config_end = .;
    } > rom
    
    _total_ram_size = SIZEOF(.bss) + SIZEOF(.data) + SIZEOF(.heap);
    _total_rom_size = SIZEOF(.text) + SIZEOF(.data) + SIZEOF(.pg_reg) + SIZEOF(.pg_reset) + SIZEOF(.config);
    HIDDEN(temp = ASSERT(_total_ram_size <= _RAM_SIZE, "RAM kapasitesi asildi."));
    HIDDEN(temp = ASSERT(_total_rom_size <= _ROM_SIZE, "ROM kapasitesi asildi."));
    
    _Min_Heap_Size  = _HEAP_SIZE;       /* required amount of heap  */
    _Min_Stack_Size = _MIN_STACK_SIZE;  /* required amount of stack */
}
