#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

int32_t clockCyclesToMicros(int32_t clockCycles)
{
    return clockCycles;
}

uint32_t clockMicrosToCycles(uint32_t micros)
{
    return micros;
}

void delay(uint32_t ms)
{
    UNUSED(ms);
}

void delayMicroseconds(uint32_t us)
{
    UNUSED(us);
}

uint32_t getCycleCounter(void)
{
    return 0;
}


uint32_t micros(void)
{
    return 0;
}

uint32_t millis(void)
{
    return 0;
}

MMFLASH_CODE_NOINLINE uint32_t microsISR(void)
{
    return 0;
}