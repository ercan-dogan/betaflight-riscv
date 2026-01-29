#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/motor_types.h"
#include "pg/motor.h"

bool dshotPwmDevInit(motorDevice_t *device, const motorDevConfig_t *motorConfig)
{
    UNUSED(device);
    UNUSED(motorConfig);
    return 0;
}
