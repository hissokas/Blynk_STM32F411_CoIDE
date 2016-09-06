#ifndef __BOARD_H_
#define __BOARD_H_

#include "stm32f4xx_hal.h"

#define W5500_SPI				SPI1

#define W5500_RESET_PORT		GPIOC
#define W5500_RESET_PIN			GPIO_PIN_2

#define W5500_INT_PORT			GPIOC
#define W5500_INT_PIN			GPIO_PIN_3

#define W5500_CS_PORT			GPIOB
#define W5500_CS_PIN			GPIO_PIN_6

#define W5500_SPI_GPIO_PORT		GPIOA
#define W5500_CLK_PIN			GPIO_PIN_5

#define W5500_MISO_PIN			GPIO_PIN_6

#define W5500_MOSI_PIN			GPIO_PIN_7

#endif
