#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/serial.h"
#include "drivers/serial_uart.h"
#include "drivers/serial_uart_impl.h"

void uartReconfigure(uartPort_t *uartPort)
{
    UNUSED(uartPort);
}

void uartPinConfigure(const serialPinConfig_t *pSerialPinConfig)
{
    UNUSED(pSerialPinConfig);
}

uartPort_t *serialUART(uartDevice_t *uartdev, uint32_t baudRate, portMode_e mode, portOptions_e options)
{
    UNUSED(uartdev);
    UNUSED(baudRate);
    UNUSED(mode);
    UNUSED(options);
    return NULL;
}

