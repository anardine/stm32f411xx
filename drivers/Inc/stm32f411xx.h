/*
 * stm32f411xx.h
 *
 *  Created on: Apr 5, 2025
 *      Author: anardinelli
 */

#ifndef INC_STM32F411XX_H_
#define INC_STM32F411XX_H_

#include <stdint.h>

// keep all the base addresses of the microcontroller

#define FASH_BASEADDR				0x08000000U

#define SRAM1_BASEADDR				0x20000000U
#define SRAM 						SRAM1_BASEADDR

#define ROM_BASEADDR				0x1FFF0000U
#define OTP_BASEADDR				0x1FFF7800U

// base addresses of each bus domains
#define PERIPH_BASEADDR				0x40000000U
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

//struct definition for GPIOx
typedef struct {
	uint32_t MODER; 		//mode select typer register
	uint32_t OTYPER;		//output type register
	uint32_t OSPEEDR;		//output speed register
	uint32_t PUPDR;			//pull-up or pull-down register
	uint32_t IDR; 			//input data register
	uint32_t ODR;			//output data register
	uint32_t BSSR;			//bit set/reset register
	uint32_t LCKR;			//port config lock register
	uint32_t AFRL; 			//alternate function low register
	uint32_t AFRH;			//alternate function high register

}GPIOx_MapR_t;


// struct definition for USARTx
typedef struct {
	uint32_t USART_SR;
	uint32_t USART_DR;
	uint32_t USART_BRR;
	uint32_t USART_CR1;
	uint32_t USART_CR2;
	uint32_t USART_CR3;
	uint32_t USART_GTPR;

}USARTx_MapR_t;


typedef struct {
	uint32_t SPI_CR1;
	uint32_t SPI_SR;
	uint32_t SPI_DR;
	uint32_t SPI_CRCPR;
	uint32_t SPI_RXCRCR;
	uint32_t SPI_TXCRCR;
	uint32_t SPI_I2S_CFGR;
	uint32_t SPI_I2S_PR;

}SPIx_MapR_t;



