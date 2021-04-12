/*
 * main.h
 *
 *  Created on: ٢٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef MAIN_H_
#define MAIN_H_


/********************************************************************************/
 /*******************************Includes****************************************/

#include "services.h"
#include <stdint.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "GPIO_Interface.h"
#include "segment_interface.h"
#include "keypad.h"
#include "switch_interface.h"
#include "DC_MOTOR_Interface.h"
#include "LCD_Interface.h"
#include "NVIC_interface.h"
#include "EXTI_Interface.h"
#include "usart_interface.h"
#include "IR_interface.h"
#include "IR_private.h"
#include "flame_sensor_interface.h"
#include "Alarm_Interface.h"

/************************************************************************************/
/**************************************#Defines***************************************/

#define max_car_count	10
#define no_car_count	0



/************************************************************************************/
/********************************Global Variables*************************************/

u8 car_count = 4;
u8 Exit_Flag = 0;

/************************************************************************************/
/******************************Function Prototype************************************/

#endif /* MAIN_H_ */
