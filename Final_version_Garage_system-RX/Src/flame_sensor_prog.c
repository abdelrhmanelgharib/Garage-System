/*
 * IR_prog.c
 *
 *  Created on: Mar 20, 2021
 *      Author: 2bdoa
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "GPIO_Interface.h"
#include "RCC_private.h"
#include "flame_sensor_config.h"
#include "flame_sensor_interface.h"
#include "flame_sensor_private.h"




void Flame_sensor_voidIntialize(void)
{


	RCC_voidEnablePeripheralCLK(RCC_AHB1, FLAME_SENSOR_PORT);
	GPIO_void_setPin_Direction(FLAME_SENSOR_PORT, FLAME_SENSOR_PIN, GENERAL_PURPOSE_OUTPUT_MODE);
//	SET_BIT(IR1_PORT_PULL_UP,0);
//	Clear_bit(IR1_PORT_PULL_UP,1);




}


u8 Flame_sensor_u8GetState(void)
{


	if (GPIO_PIN_VALUE_getPin_value(FLAME_SENSOR_PORT, FLAME_SENSOR_PIN)==HIGH)
	{
		return FLAME;
	}
	else if(GPIO_PIN_VALUE_getPin_value(FLAME_SENSOR_PORT, FLAME_SENSOR_PIN)==LOW)
	{
		return NO_FLAME;
	}//end else



}
