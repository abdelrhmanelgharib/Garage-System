/*
 * switch_config.h
 *
 *  Created on: ١٣‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef SWITCH_CONFIG_H_
#define SWITCH_CONFIG_H_
#include "GPIO_PRIVATE.h"

#define SW0					0
#define SW1					1

#define SW_0_CONNECTION		 	PULL_UP
#define SW_1_CONNECTION		 	PULL_UP

#define SW0_port_mode		GPIOD_MODER
#define SW0_port_type		GPIOD_OTYPER
#define SW0_ODR				GPIOD_ODR
#define SW0_IDR				GPIOD_IDR


#define SW1_port_mode		GPIOB_MODER
#define SW1_port_type		GPIOB_OTYPER
#define SW1_ODR				GPIOB_ODR
#define SW1_IDR				GPIOB_IDR


#define SW0_pin_number		14
#define SW1_pin_number		5

#endif /* SWITCH_CONFIG_H_ */
