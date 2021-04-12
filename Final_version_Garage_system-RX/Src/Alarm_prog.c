/*
 * Alarm_prog.c
 *
 *  Created on: ٢٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */


#include "Alarm_Interface.h"
#include "Alarm_Config.h"
#include "GPIO_Interface.h"
void Alarm_voidInit(void)
{
	GPIO_void_setPin_Direction(Alarm_PORT, Alarm_PIN_IN1, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(Alarm_PORT, Alarm_PIN_IN1, OUTPUT_OPEN_DRAIN);

	GPIO_void_setPin_Direction(Alarm_PORT, Alarm_PIN_IN2, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(Alarm_PORT, Alarm_PIN_IN2, OUTPUT_OPEN_DRAIN);

	GPIO_void_setPin_Direction(Alarm_PORT, Alarm_PIN_EN, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(Alarm_PORT, Alarm_PIN_EN, OUTPUT_OPEN_DRAIN);
}
void Alarm_voidAlarmOn(void)
{

	GPIO_void_setPin_value(Alarm_PORT, Alarm_PIN_EN, HIGH);
	GPIO_void_setPin_value(Alarm_PORT, Alarm_PIN_IN1, HIGH);
	GPIO_void_setPin_value(Alarm_PORT, Alarm_PIN_IN2, LOW);
}

void Alarm_voidAlarmOff(void)
{
	GPIO_void_setPin_value(Alarm_PORT, Alarm_PIN_IN1, LOW);
	GPIO_void_setPin_value(Alarm_PORT, Alarm_PIN_IN2, LOW);
}
