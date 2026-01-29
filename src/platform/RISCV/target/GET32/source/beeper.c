#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/io_types.h"

void beeperPwmInit(const ioTag_t tag, uint16_t frequency)
{
    UNUSED(tag);
    UNUSED(frequency);
}
