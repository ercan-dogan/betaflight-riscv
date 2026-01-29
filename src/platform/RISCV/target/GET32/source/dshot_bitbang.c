#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/motor_types.h"
#include "drivers/dshot_bitbang.h"
#include "pg/motor.h"

bool dshotBitbangDevInit(motorDevice_t *device, const motorDevConfig_t *motorConfig)
{
    UNUSED(device);
    UNUSED(motorConfig);
    return 0;
}

dshotBitbangStatus_e dshotBitbangGetStatus(void)
{
    return 0;
}

bool isDshotBitbangActive(const motorDevConfig_t *motorDevConfig)
{
    UNUSED(motorDevConfig);
    return 0;
}
