#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/bus_i2c.h"
#include "pg/bus_i2c.h"

bool i2cBusy(i2cDevice_e device, bool *error)
{
    UNUSED(device);
    UNUSED(error);
    return 0;
}

uint16_t i2cGetErrorCounter(void)
{
    return 0;
}

void i2cInit(i2cDevice_e device)
{
    UNUSED(device);
}

bool i2cRead(i2cDevice_e device, uint8_t addr_, uint8_t reg_, uint8_t len, uint8_t* buf)
{
    UNUSED(device);
    UNUSED(addr_);
    UNUSED(reg_);
    UNUSED(len);
    UNUSED(buf);
    return 0;
}

bool i2cReadBuffer(i2cDevice_e device, uint8_t addr_, uint8_t reg_, uint8_t len, uint8_t* buf)
{
    UNUSED(device);
    UNUSED(addr_);
    UNUSED(reg_);
    UNUSED(len);
    UNUSED(buf);
    return 0;
}

bool i2cWrite(i2cDevice_e device, uint8_t addr_, uint8_t reg_, uint8_t data)
{
    UNUSED(device);
    UNUSED(addr_);
    UNUSED(reg_);
    UNUSED(data);
    return 0;
}

bool i2cWriteBuffer(i2cDevice_e device, uint8_t addr_, uint8_t reg_, uint8_t len_, uint8_t *data)
{
    UNUSED(device);
    UNUSED(addr_);
    UNUSED(reg_);
    UNUSED(len_);
    UNUSED(data);
    return 0;
}

void i2cPinConfigure(const i2cConfig_t *i2cConfig)
{
    UNUSED(i2cConfig);
}