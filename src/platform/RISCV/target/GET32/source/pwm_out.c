#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/motor_types.h"
#include "drivers/servo_impl.h"
#include "pg/motor.h"

bool motorPwmDevInit(motorDevice_t *device, const motorDevConfig_t *motorConfig, uint16_t idlePulse)
{
    UNUSED(device);
    UNUSED(motorConfig);
    UNUSED(idlePulse);
    return 0;
}

void servoDevInit(const servoDevConfig_t *servoConfig)
{
    UNUSED(servoConfig);
}

void servoWrite(uint8_t index, float value)
{
    UNUSED(index);
    UNUSED(value);
}

void pwmWriteBeeper(bool on)
{
    UNUSED(on);
}
