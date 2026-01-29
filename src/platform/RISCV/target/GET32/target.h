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

#ifndef TARGET_BOARD_IDENTIFIER
#define TARGET_BOARD_IDENTIFIER "GET32"
#endif

#ifndef USBD_PRODUCT_STRING
#define USBD_PRODUCT_STRING     "Betaflight GET32"
#endif

#ifndef GET32
#define GET32
#endif

#undef  USE_DMA
#undef  USE_VCP

#define USE_EXTI

#define USE_ADC
#undef  USE_ADC_INTERNAL
#undef  ADC_INTERNAL_VBAT4_ENABLED
#undef  PLATFORM_TRAIT_ADC_DEVICE

#undef  CONFIG_IN_EXTERNAL_FLASH
#undef  CONFIG_IN_MEMORY_MAPPED_FLASH
#undef  CONFIG_IN_RAM
#undef  CONFIG_IN_SDCARD
#undef  CONFIG_IN_FILE
#define CONFIG_IN_FLASH
#define FLASH_CONFIG_STREAMER_BUFFER_SIZE 64
#define FLASH_CONFIG_BUFFER_TYPE uint32_t

#define DEBUG_PIN_COUNT 4
#define USE_DEBUG_PIN
#undef  USE_PINIO

#define USE_DSHOT
#define USE_DSHOT_BITBANG
#define USE_DSHOT_BITBAND
#define BB_OUTPUT_BUFFER_ATTRIBUTE
#define BB_INPUT_BUFFER_ATTRIBUTE
#undef  USE_DSHOT_CACHE_MGMT

#define USE_ESCSERIAL

#define USE_I2C
#undef  USE_SOFT_I2C
#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3
#define USE_I2C_DEVICE_4

#define USE_TIMER

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3
#define USE_SPI_DEVICE_4
#undef  USE_SPI_DMA_ENABLE_EARLY
#undef  USE_SPI_DMA_ENABLE_LATE

#define USE_UART
#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4

#define USE_INVERTER

#define USE_PWM_OUTPUT
#define USE_SERVOS
#define USE_BEEPER

#define SERIAL_TRAIT_PIN_CONFIG 1
