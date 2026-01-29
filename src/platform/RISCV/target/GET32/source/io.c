#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/io_types.h"

void IOConfigGPIO(IO_t io, ioConfig_t cfg)
{
    UNUSED(io);
    UNUSED(cfg);
}

IO_t IOGetByTag(ioTag_t tag)
{
    UNUSED(tag);
    return NULL;
}

void IOHi(IO_t io)
{
    UNUSED(io);
}

void IOInitGlobal(void)
{
    // NOOP
}

void IOLo(IO_t io)
{
    UNUSED(io);
}

bool IORead(IO_t io)
{
    UNUSED(io);
    return false;
}

void IOToggle(IO_t io)
{
    UNUSED(io);
}

void IOWrite(IO_t io, bool hi)
{
    UNUSED(io);
    UNUSED(hi);
}