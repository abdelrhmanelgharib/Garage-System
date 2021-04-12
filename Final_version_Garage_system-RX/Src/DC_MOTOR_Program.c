/*
 * DC_MOTOR_Program.c
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */
#include "BIT_MATH.h"
#include "STD_Types.h"
#include "DC_MOTOR_Interface.h"
#include "DC_MOTOR_Config.h"
#include "GPIO_Interface.h"
#include "RCC_private.h"

void DCmotor_init(void)
{
	/// motor pins and ports set in configuration file

	GPIO_void_setPin_Direction(DC_MOTOR_PORT, DC_MOTOR_PIN_IN1, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(DC_MOTOR_PORT, DC_MOTOR_PIN_IN1, OUTPUT_OPEN_DRAIN);

	GPIO_void_setPin_Direction(DC_MOTOR_PORT, DC_MOTOR_PIN_IN2, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(DC_MOTOR_PORT, DC_MOTOR_PIN_IN2, OUTPUT_OPEN_DRAIN);

	GPIO_void_setPin_Direction(DC_MOTOR_PORT, DC_MOTOR_PIN_EN1, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(DC_MOTOR_PORT, DC_MOTOR_PIN_EN1, OUTPUT_OPEN_DRAIN);
	GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_EN1, HIGH);
}//end DC motor initialize

void DCmotor_Stop(void)
{

	GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_IN1, HIGH);
	GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_IN2, HIGH);
}
void DCmotor_Direction(u32 direction)
{
	switch(direction)
	{
	   case  CLK_WISE_DIRECTION:
		   GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_IN1, HIGH);
		   	GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_IN2, LOW);
	   break;

	   case    ANTI_CLK_WISE_DIRECTION:
		   GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_IN1, LOW);
		   	GPIO_void_setPin_value(DC_MOTOR_PORT, DC_MOTOR_PIN_IN2, HIGH);
	   break;

       default:
	   break;
	}

}// end DCmotor_Direction
