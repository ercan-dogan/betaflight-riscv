#include <stdint.h>

#define MCAUSE_INT   (1u << 31)
#define MCAUSE_CODE  (0x7FFFFFFF)

void trap_handler_c(void)
{
    uint32_t mcause;
    asm volatile ("csrr %0, mcause" : "=r"(mcause));

    if (mcause & MCAUSE_INT) {
        /* INTERRUPT */
        uint32_t irq = mcause & MCAUSE_CODE;

        if (irq == 7) {
            /* MTIP – timer interrupt */
            /* şimdilik boş */
        } else {
            /* diğer interruptlar */
        }
    } else {
        /* EXCEPTION */
        /* şimdilik hepsi fatal */
        while (1);
    }
}
