/*
 * stm32f411xx.h
 *
 *  Created on: Apr 5, 2025
 *      Author: anardinelli
 */

#ifndef INC_STM32F411XX_H_
#define INC_STM32F411XX_H_

// keep all the base addresses of the microcontroller

#define FASH_BASEADDR				0x08000000U

#define SRAM1_BASEADDR				0x20000000U
#define SRAM 						SRAM1_BASEADDR

#define ROM_BASEADDR				0x1FFF0000U
#define OTP_BASEADDR				0x1FFF7800U

// base addresses of each bus domains
#define PERIPH_BASE					0x40000000U
#define APB1PERIPH_BASE				0x40000000U
#define APB2PERIPH_BASE				0x40010000U
#define AHB1PERIPH_BASE				0x40020000U
#define AHB2PERIPH_BASE				0x50000000U

// base addresses of GPIOx on AHB1 peripheral
#define RCC_BASEADDR				(AHB1PERIPH_BASE + 0x3800)
#define GPIOA_BASEADDR				(AHB1PERIPH_BASE + 0x0000)
#define GPIOB_BASEADDR				(AHB1PERIPH_BASE + 0x0400)
#define GPIOC_BASEADDR				(AHB1PERIPH_BASE + 0x0800)
#define GPIOD_BASEADDR				(AHB1PERIPH_BASE + 0x0C00)
#define GPIOE_BASEADDR				(AHB1PERIPH_BASE + 0x1000)
#define GPIOH_BASEADDR				(AHB1PERIPH_BASE + 0x1C00)

// base addresses of components for the APB1 peripheral
#define SPI2_BASEADDR				(APB1PERIPH_BASE + 0x3800)
#define SPI3_BASEADDR				(APB1PERIPH_BASE + 0x3C00)
#define USART2_BASEADDR				(APB1PERIPH_BASE + 0x4400)
#define I2C1_BASEADDR				(APB1PERIPH_BASE + 0x5400)
#define I2C2_BASEADDR				(APB1PERIPH_BASE + 0x5800)
#define I2C3_BASEADDR				(APB1PERIPH_BASE + 0x5C00)

// base addresses of components for the APB2 peripheral
#define USART1_BASEADDR				(APB2PERIPH_BASE + 0x1000)
#define USART6_BASEADDR				(APB2PERIPH_BASE + 0x1400)
#define SPI1_BASEADDR				(APB2PERIPH_BASE + 0x3000)
#define SPI4_BASEADDR				(APB2PERIPH_BASE + 0x3400)
#define SPI5_BASEADDR				(APB2PERIPH_BASE + 0x5000)
#define EXTI_BASEADDR				(APB2PERIPH_BASE + 0x3C00)
#define SYSCONFIG_BASEADDR			(APB2PERIPH_BASE + 0x3800)

// base addresses of components for the APB2 peripheral
#define USBOTG_BASEADDR				(AHB2PERIPH_BASE + 0x0000)


#endif /* INC_STM32F411XX_H_ */
