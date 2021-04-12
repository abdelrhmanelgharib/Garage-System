/*
 * segment_config.h
 *
 *  Created on: ١٣‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef SEGMENT_CONFIG_H_
#define SEGMENT_CONFIG_H_

#include "GPIO_PRIVATE.h"
#include "GPIO_Interface.h"


#define SEG0_PORT					PORT_E
#define segment0_enable_pin			PIN7
#define segment0_a_pin				PIN0
#define segment0_b_pin				PIN1
#define segment0_c_pin				PIN2
#define segment0_d_pin				PIN3
#define segment0_e_pin				PIN4
#define segment0_f_pin				PIN5
#define segment0_g_pin				PIN6

#define segment0_port_mode		GPIOE_MODER
#define segment0_port_type		GPIOE_OTYPER
#define segment0_ODR			GPIOE_ODR


#define SEG1_PORT				PORT_D
#define segment1_enable_pin		PIN7
#define segment1_a_pin			PIN0
#define segment1_b_pin			PIN1
#define segment1_c_pin			PIN2
#define segment1_d_pin			PIN3
#define segment1_e_pin			PIN4
#define segment1_f_pin			PIN5
#define segment1_g_pin			PIN6


#define segment1_port_mode		GPIOD_MODER
#define segment1_port_type		GPIOD_OTYPER
#define segment1_ODR			GPIOD_ODR



//#define segment0_pina			0

#endif /* SEGMENT_CONFIG_H_ */
