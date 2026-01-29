#include "platform.h"

#include "build/build_config.h"
#include "drivers/dshot.h"
#include "drivers/system.h"

uint32_t SystemCoreClock;
FAST_DATA_ZERO_INIT dshotTelemetryCycleCounters_t dshotDMAHandlerCycleCounters;
FAST_DATA_ZERO_INIT bool useDshotTelemetry = false;

void systemInit(void)
{
}

void __disable_irq(void)
{
}

void __enable_irq(void)
{
}

const mcuTypeInfo_t *getMcuTypeInfo(void)
{
    return NULL;
}

void unusedPinsInit(void)
{
}

void indicateFailure(failureMode_e mode, int codeRepeatsRemaining)
{
    UNUSED(mode);
    UNUSED(codeRepeatsRemaining);
}

void failureMode(failureMode_e mode)
{
    UNUSED(mode);
}

void systemResetToBootloader(bootloaderRequestType_e requestType)
{
    UNUSED(requestType);
}

void systemReset(void)
{
}

bool isMPUSoftReset(void)
{
    return 0;
}