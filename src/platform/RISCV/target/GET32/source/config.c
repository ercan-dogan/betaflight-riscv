#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "config/config_streamer.h"

void configClearFlags(void)
{
}

void configLock(void)
{
}

void configUnlock(void)
{
}

configStreamerResult_e configWriteWord(uintptr_t address, config_streamer_buffer_type_t *buffer)
{
    UNUSED(address);
    UNUSED(buffer);
    return 0;
}

void configTimeBase(TIM_TypeDef *tim, uint16_t period, uint32_t hz)
{
    UNUSED(tim);
    UNUSED(period);
    UNUSED(hz);
}