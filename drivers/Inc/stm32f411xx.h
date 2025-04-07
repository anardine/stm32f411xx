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

// Struct definition for RCC clock for all peripheral buses

typedef struct {
	volatile uint32_t RTC_TR;
	volatile uint32_t RTC_DR;
	volatile uint32_t RTC_CR;
	volatile uint32_t RTC_ISR;
	volatile uint32_t RTC_PRER;
	volatile uint32_t RTC_WUTR;
	volatile uint32_t RTC_CALIBR;
	volatile uint32_t RTC_ALRMAR;
	volatile uint32_t RTC_ALRMBR;
	volatile uint32_t RTC_WPR;
	volatile uint32_t RTC_SSR;
	volatile uint32_t RTC_SHIFTR;
	volatile uint32_t RTC_TSTR;
	volatile uint32_t RTC_TSDR;
	volatile uint32_t RTC_TSSSR;
	volatile uint32_t RTC_CARLR;
	volatile uint32_t RTC_TAFCR;
	volatile uint32_t RTC_ALRMASSR;
	volatile uint32_t RTC_ALRMBSSR;
	volatile uint32_t RTC_BKP0R;
	volatile uint32_t RTC_BKP19R;

}RCC_MapR_t;



// Struct def for all common used peripherals.

//struct definition for GPIOx
typedef struct {
	volatile uint32_t MODER; 		//mode select typer register
	volatile uint32_t OTYPER;		//output type register
	volatile uint32_t OSPEEDR;		//output speed register
	volatile uint32_t PUPDR;			//pull-up or pull-down register
	volatile uint32_t IDR; 			//input data register
	volatile uint32_t ODR;			//output data register
	volatile uint32_t BSSR;			//bit set/reset register
	volatile uint32_t LCKR;			//port config lock register
	volatile uint32_t AFRL; 			//alternate function low register
	volatile uint32_t AFRH;			//alternate function high register

}GPIOx_MapR_t;


// struct definition for USARTx
typedef struct {
	volatile uint32_t USART_SR;
	volatile uint32_t USART_DR;
	volatile uint32_t USART_BRR;
	volatile uint32_t USART_CR1;
	volatile uint32_t USART_CR2;
	volatile uint32_t USART_CR3;
	volatile uint32_t USART_GTPR;

}USARTx_MapR_t;

// struct definition for SPIx
typedef struct {
	volatile uint32_t SPI_CR1;
	volatile uint32_t SPI_SR;
	volatile uint32_t SPI_DR;
	volatile uint32_t SPI_CRCPR;
	volatile uint32_t SPI_RXCRCR;
	volatile uint32_t SPI_TXCRCR;
	volatile uint32_t SPI_I2S_CFGR;
	volatile uint32_t SPI_I2S_PR;

}SPIx_MapR_t;

// struct definition for I2Cx
typedef struct {
	volatile uint32_t I2C_CR1;
	volatile uint32_t I2C_CR2;
	volatile uint32_t I2C_OAR1;
	volatile uint32_t I2C_OAR2;
	volatile uint32_t I2C_DR;
	volatile uint32_t I2C_SR1;
	volatile uint32_t I2C_SR2;
	volatile uint32_t I2C_CCR;
	volatile uint32_t I2C_TRISE;
	volatile uint32_t I2C_FRTR;
}I2Cx_MapR_t;



