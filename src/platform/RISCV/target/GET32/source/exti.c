#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#ifdef USE_EXTI

#include "drivers/nvic.h"
#include "drivers/io_impl.h"
#include "drivers/exti.h"

void EXTIConfig(IO_t io, extiCallbackRec_t *cb, int irqPriority, ioConfig_t config, extiTrigger_t trigger)
{
    UNUSED(io);
    UNUSED(cb);
    UNUSED(irqPriority);
    UNUSED(config);
    UNUSED(trigger);
}

void EXTIDisable(IO_t io)
{
    UNUSED(io);
}

void EXTIEnable(IO_t io)
{
    UNUSED(io);
}

void EXTIHandlerInit(extiCallbackRec_t *self, extiHandlerCallback *fn)
{
    UNUSED(self);
    UNUSED(fn);
}

void EXTIInit(void)
{
}

void EXTIRelease(IO_t io)
{
    UNUSED(io);
}

#endif