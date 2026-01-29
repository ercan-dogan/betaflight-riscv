#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/persistent.h"

uint32_t persistentObjectRead(persistentObjectId_e id)
{
    UNUSED(id);
    return 0;
}

void persistentObjectWrite(persistentObjectId_e id, uint32_t value)
{
    UNUSED(id);
    UNUSED(value);
}

void persistentObjectInit(void)
{
}
