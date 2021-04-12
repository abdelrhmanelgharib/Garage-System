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
#include "IR_interface.h"
#include "IR_private.h"
#include "IR_config.h"




void IR_voidIntialize(u8 IR_num)
{

	if(IR_num == IR1)
	{
	RCC_voidEnablePeripheralCLK(RCC_AHB1, IR1_PORT);
	GPIO_void_setPin_Direction(IR1_PORT, IR1_PIN, GENERAL_PURPOSE_OUTPUT_MODE);
//	SET_BIT(IR1_PORT_PULL_UP,0);
//	Clear_bit(IR1_PORT_PULL_UP,1);


	}
	else if(IR_num == IR2)
	{
	RCC_voidEnablePeripheralCLK(RCC_AHB1, IR2_PORT);
	GPIO_void_setPin_Direction(IR2_PORT, IR2_PIN, GENERAL_PURPOSE_OUTPUT_MODE);
//	SET_BIT(IR2_PORT_PULL_UP,2);
//	Clear_bit(IR2_PORT_PULL_UP,3);
	}


}


u8 IR_u8GetState(u8 IR_num)
{
	if(IR_num == IR1)
	{
	if (GPIO_PIN_VALUE_getPin_value(IR1_PORT, IR1_PIN)==HIGH)
	{
		return OBSTACLE;
	}
	else if(GPIO_PIN_VALUE_getPin_value(IR1_PORT, IR1_PIN)==LOW)
	{
		return NO_OBSTACLE;
	}//end else
	}//end if
	else if(IR_num == IR2)
	{

		if (GPIO_PIN_VALUE_getPin_value(IR2_PORT, IR2_PIN)==HIGH)
		{
			return OBSTACLE;
		}
		else if(GPIO_PIN_VALUE_getPin_value(IR2_PORT, IR2_PIN)==LOW)
		{
			return NO_OBSTACLE;
		}//end else
	}
}
