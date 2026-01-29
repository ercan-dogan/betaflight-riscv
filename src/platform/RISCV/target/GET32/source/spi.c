#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/bus_spi.h"
#include "pg/bus_spi.h"

uint16_t spiCalculateDivider(uint32_t freq)
{
    UNUSED(freq);
    return 0;
}

void spiInitBusDMA(void)
{

}

void spiInitDevice(spiDevice_e device)
{
    UNUSED(device);
}

void spiPinConfigure(const spiPinConfig_t *pConfig)
{
    UNUSED(pConfig);
}

void spiPreinit(void)
{

}

void spiSequenceStart(const extDevice_t *dev)
{
    UNUSED(dev);
}

