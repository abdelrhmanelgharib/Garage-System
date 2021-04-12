/*
 * keypad_config.h
 *
 *  Created on: ١٣‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

#include "GPIO_PRIVATE.h"
#define keypad_port_mode		GPIOC_MODER
#define keypad_port_type		GPIOC_OTYPER
#define keypad_ODR				GPIOC_ODR
#define keypad_IDR				GPIOC_IDR
#endif /* KEYPAD_CONFIG_H_ */
