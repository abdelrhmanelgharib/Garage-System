/*
 * GPIO_Interface.h
 *
 *  Created on: Mar 8, 2021
 *      Author: Nada
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_
#include "STD_TYPES.h"
/*	 Alternative Functions	*/
#define AF0		0
#define AF1		1
#define AF2		2
#define AF3		3
#define AF4		4
#define AF5		5
#define AF6		6
#define AF7		7
#define AF8		8
#define AF9		9
#define AF10	10
#define AF11	11
#define AF12	12
#define AF13	13
#define AF15	14
#define AF16	15

typedef enum
{
	 PIN0  ,
     PIN1  ,
     PIN2  ,
     PIN3  ,
     PIN4  ,
     PIN5  ,
     PIN6  ,
     PIN7  ,
     PIN8  ,
     PIN9  ,
     PIN10 ,
     PIN11 ,
     PIN12 ,
     PIN13 ,
     PIN14 ,
     PIN15
}PIN_ID;

typedef enum
{
	 PORT_A ,
	 PORT_B ,
	 PORT_C ,
	 PORT_D ,
	 PORT_E ,
	 PORT_H
}PORT_ID;

typedef enum
{
	INPUT_MODE =0,
	GENERAL_PURPOSE_OUTPUT_MODE,
	ALTERNATIVE_FUNCTION_MODE,
	ANALOG_MODE
}DIRECTION_MODE;

typedef enum
{
	OUTPUT_PUSH_PULL = 0,
	OUTPUT_OPEN_DRAIN
}OUTPUT_TYPE;

typedef enum
{
	OUTPUT_LOW_SPEED = 0,
	OUTPUT_MEDIUM_SPEED,
	OUTPUT_HIGH_SPEED,
	OUTPUT_VERY_HIGH_SPEED
}OUTPUT_SPEED;

typedef enum
{
	INPUT = 0,
	OUTPUT
}DIRECTION_TYPE;


typedef enum
{
	LOW = 0,
	HIGH
}PIN_VALUE;


typedef enum
{
    RESET_PIN =0 ,
    SET_PIN    ,
    LOCK_PIN =0  ,
    UNLOCK_PIN
}PIN_STATUS;

void GPIO_void_setPin_Direction(PORT_ID port , PIN_ID pin , DIRECTION_MODE Direction);
void GPIO_void_setPin_Output_Type(PORT_ID port , PIN_ID pin , OUTPUT_TYPE output_type);
void GPIO_void_setPin_value(PORT_ID port , PIN_ID pin , PIN_VALUE value);
PIN_VALUE GPIO_PIN_VALUE_getPin_value(PORT_ID port , PIN_ID pin);
void LOCK_PIN_CONFIG(PORT_ID port,PIN_ID pin, PIN_STATUS PIN_STATUS);
void GPIO_voidSetAltFunction(u8 Copy_u8PortID,u8 Copy_u8PinID ,u32 Copy_u8AltValue);

#endif /* GPIO_INTERFACE_H_ */
