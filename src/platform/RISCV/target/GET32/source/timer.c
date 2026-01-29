#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#include "drivers/timer.h"

void timerChOvrHandlerInit(timerOvrHandlerRec_t *self, timerOvrHandlerCallback *fn)
{
    UNUSED(self);
    UNUSED(fn);
}

void timerConfigUpdateCallback(const TIM_TypeDef *tim, timerOvrHandlerRec_t *updateCallback)
{
    UNUSED(tim);
    UNUSED(updateCallback);
}

void timerDisable(TIM_TypeDef *timer)
{
    UNUSED(timer);
}

void timerEnable(TIM_TypeDef *timer)
{
    UNUSED(timer);
}

void timerEnableInterrupt(TIM_TypeDef *timer)
{
    UNUSED(timer);
}

void timerInit(void)
{
}

uint8_t timerInputIrq(const TIM_TypeDef *tim)
{
    UNUSED(tim);
    return 0;
}

void timerReconfigureTimeBase(TIM_TypeDef *tim, uint16_t period, uint32_t hz)
{
    UNUSED(tim);
    UNUSED(period);
    UNUSED(hz);
}

void timerSetCounter(TIM_TypeDef *timer, uint32_t counter)
{
    UNUSED(timer);
    UNUSED(counter);
}

void timerSetPeriod(TIM_TypeDef *timer, uint32_t period)
{
    UNUSED(timer);
    UNUSED(period);
}
