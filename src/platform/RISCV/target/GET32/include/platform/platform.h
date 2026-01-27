/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

typedef struct
{
  uint32_t DUMMY;
} GPIO_TypeDef;

typedef struct
{
  uint32_t DUMMY;
} DMA_TypeDef;

typedef struct
{
  uint32_t DUMMY;
} DMA_InitTypeDef;

typedef struct
{
  uint32_t DUMMY;
} SPI_TypeDef;

typedef struct
{
  uint32_t DUMMY;
} TIM_TypeDef;

typedef struct
{
  uint32_t DUMMY;
} TIM_OCInitTypeDef;

typedef struct
{
  uint32_t DUMMY;
} TIM_ICInitTypeDef;

typedef struct
{
  uint32_t DUMMY;
} USART_TypeDef;

typedef enum {NO_IRQ_N = 0 } IRQn_Type;
typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;

 typedef enum {
    DMA_NONE = 0,
    DMA_FIRST_HANDLER = DMA_NONE,
    DMA_LAST_HANDLER = DMA_NONE
} dmaIdentifier_e;

#define FLASH_CONFIG_BUFFER_TYPE      uint32_t
#define DEFAULT_CPU_OVERCLOCK 0
#define IOCFG_OUT_PP      0
#define IOCFG_OUT_OD      0
#define IOCFG_IPU         0
#define IOCFG_IPD         0
#define IOCFG_AF_PP       0
#define SPI_IO_CS_CFG     0
#define IOCFG_IN_FLOATING 0

#define I2CDEV_COUNT 2
#define SPIDEV_COUNT 4

#define MAX_SPI_PIN_SEL 4

#define U_ID_0 (0x12)
#define U_ID_1 (0x34)
#define U_ID_2 (0x56)

#define TASK_GYROPID_DESIRED_PERIOD     125 // 125us = 8kHz
#define SCHEDULER_DELAY_LIMIT           10

#define __ASM asm

extern uint32_t SystemCoreClock;

#define __set_BASEPRI(VALUE)        (UNUSED(VALUE))
#define __set_BASEPRI_MAX(VALUE)    (UNUSED(VALUE))
#define __get_BASEPRI()             (0)
#define NVIC_PriorityGroup_2 0x500

#undef USE_RX_PWM	//açınca patlıyor. .\src\main\drivers\rx\rx_pwm.c içerisinde ARM kütükleri falan istiyor. Uzun iş, sonra bak.
#undef USE_RX_PPM	//açınca patlıyor. .\src\main\drivers\rx\rx_pwm.c içerisinde ARM kütükleri falan istiyor. Uzun iş, sonra bak.

#define Bit_RESET 0
#define DMA_DATA
#define DMA_DATA_ZERO_INIT
#define FAST_IRQ_HANDLER

#define SPI1                        ((SPI_TypeDef*)              0)
#define SPI2                        ((SPI_TypeDef*)              0)
#define SPI3                        ((SPI_TypeDef*)              0)
#define SPI4                        ((SPI_TypeDef*)              0)

#define UARTHARDWARE_MAX_PINS 4
#define UART_TRAIT_AF_PIN 1
#define UART_TRAIT_AF_PORT 1

#define UART_TX_BUFFER_ATTRIBUTE
#define UART_RX_BUFFER_ATTRIBUTE
#define STATIC_DMA_DATA_AUTO            static

void __disable_irq(void);
void __enable_irq(void);

#define NVIC_EnableIRQ(irq)					(UNUSED(irq))
#define NVIC_SetPriority(a, b) 				(UNUSED(a || b))
#define __NOP()

