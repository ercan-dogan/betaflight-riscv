#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/serial.h"
#include "pg/motor.h"

bool escEnablePassthrough(serialPort_t *escPassthroughPort, const motorDevConfig_t *motorConfig, uint16_t escIndex, uint8_t mode)
{
    UNUSED(escPassthroughPort);
    UNUSED(motorConfig);
    UNUSED(escIndex);
    UNUSED(mode);    
    return 0;
}