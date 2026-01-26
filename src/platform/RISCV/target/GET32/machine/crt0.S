# 0 "src/platform/RISCV/target/GET32/machine/crt0.S"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "src/platform/RISCV/target/GET32/machine/crt0.S"
.section .init, "ax"
.global _start

_start:
    la sp, _stack_top


    la a0, _sidata
    la a1, _sdata
    la a2, _edata
1:
    beq a1, a2, 2f
    lw t0, 0(a0)
    sw t0, 0(a1)
    addi a0, a0, 4
    addi a1, a1, 4
    j 1b
2:

    la a0, _sbss
    la a1, _ebss
3:
    beq a0, a1, 4f
    sw zero, 0(a0)
    addi a0, a0, 4
    j 3b
4:

    la t0, trap_entry
    csrw mtvec, t0

    call main

5:
    j 5b
