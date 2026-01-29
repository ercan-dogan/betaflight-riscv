#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/bus_spi.h"
#include "pg/bus_spi.h"

void usbCableDetectInit(void)
{

}

bool usbCableIsInserted(void)
{
    return 0;
}