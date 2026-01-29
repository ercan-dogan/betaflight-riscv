#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/adc.h"
#include "pg/adc.h"

uint16_t adcGetValue(adcSource_e source)
{
    UNUSED(source);
    return 0;
}

void adcInit(const adcConfig_t *config)
{
    UNUSED(config);
}