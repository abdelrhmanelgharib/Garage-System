/*
 * GPIO_Program.c
 *
 *  Created on: Mar 8, 2021
 */
#include "GPIO_PRIVATE.h"
#include "GPIO_Config.h"
#include "GPIO_Interface.h"

#include "BIT_MATH.h"
void GPIO_void_setPin_Direction(PORT_ID port , PIN_ID pin , DIRECTION_MODE Direction)
{
	switch(port)
	{
	case PORT_A:
		switch(Direction)
		{
		case INPUT_MODE:Clear_bit(GPIOA_MODER,pin*2);Clear_bit(GPIOA_MODER,(pin*2+1));break;
		case GENERAL_PURPOSE_OUTPUT_MODE:SET_BIT(GPIOA_MODER,pin*2);Clear_bit(GPIOA_MODER,(pin*2+1));
		break;
		case ALTERNATIVE_FUNCTION_MODE:Clear_bit(GPIOA_MODER,pin*2);SET_BIT(GPIOA_MODER,(pin*2+1));break;
		case ANALOG_MODE:SET_BIT(GPIOA_MODER,pin*2);SET_BIT(GPIOA_MODER,(pin*2+1));break;
		}
	break;

	case PORT_B:
		switch(Direction)
		{
		case INPUT_MODE:Clear_bit(GPIOB_MODER,pin*2);Clear_bit(GPIOB_MODER,(pin*2+1));break;
		case GENERAL_PURPOSE_OUTPUT_MODE:SET_BIT(GPIOB_MODER,pin*2);Clear_bit(GPIOB_MODER,(pin*2+1));
		break;
		case ALTERNATIVE_FUNCTION_MODE:Clear_bit(GPIOB_MODER,pin*2);SET_BIT(GPIOB_MODER,(pin*2+1));break;
		case ANALOG_MODE:SET_BIT(GPIOB_MODER,pin*2);SET_BIT(GPIOB_MODER,(pin*2+1));break;
		}
	break;

	case PORT_C:
		switch(Direction)
		{
		case INPUT_MODE:Clear_bit(GPIOC_MODER,pin*2);Clear_bit(GPIOC_MODER,(pin*2+1));break;
		case GENERAL_PURPOSE_OUTPUT_MODE:SET_BIT(GPIOC_MODER,pin*2);Clear_bit(GPIOC_MODER,(pin*2+1));
		break;
		case ALTERNATIVE_FUNCTION_MODE:Clear_bit(GPIOC_MODER,pin*2);SET_BIT(GPIOC_MODER,(pin*2+1));break;
		case ANALOG_MODE:SET_BIT(GPIOC_MODER,pin*2);SET_BIT(GPIOC_MODER,(pin*2+1));break;
		}
	break;

	case PORT_D:
		switch(Direction)
		{
		case INPUT_MODE:Clear_bit(GPIOD_MODER,pin*2);Clear_bit(GPIOD_MODER,(pin*2+1));break;
		case GENERAL_PURPOSE_OUTPUT_MODE:SET_BIT(GPIOD_MODER,pin*2);Clear_bit(GPIOD_MODER,(pin*2+1));
		break;
		case ALTERNATIVE_FUNCTION_MODE:Clear_bit(GPIOD_MODER,pin*2);SET_BIT(GPIOD_MODER,(pin*2+1));break;
		case ANALOG_MODE:SET_BIT(GPIOD_MODER,pin*2);SET_BIT(GPIOD_MODER,(pin*2+1));break;
		}
	break;

	case PORT_E:
		switch(Direction)
		{
		case INPUT_MODE:Clear_bit(GPIOE_MODER,pin*2);Clear_bit(GPIOE_MODER,(pin*2+1));break;
		case GENERAL_PURPOSE_OUTPUT_MODE:SET_BIT(GPIOE_MODER,pin*2);Clear_bit(GPIOE_MODER,(pin*2+1));
		break;
		case ALTERNATIVE_FUNCTION_MODE:Clear_bit(GPIOE_MODER,pin*2);SET_BIT(GPIOE_MODER,(pin*2+1));break;
		case ANALOG_MODE:SET_BIT(GPIOE_MODER,pin*2);SET_BIT(GPIOE_MODER,(pin*2+1));break;
		}
	break;

	case PORT_H:
		switch(Direction)
		{
		case INPUT_MODE:Clear_bit(GPIOH_MODER,pin*2);Clear_bit(GPIOH_MODER,(pin*2+1));break;
		case GENERAL_PURPOSE_OUTPUT_MODE:SET_BIT(GPIOH_MODER,pin*2);Clear_bit(GPIOH_MODER,(pin*2+1));
		break;
		case ALTERNATIVE_FUNCTION_MODE:Clear_bit(GPIOH_MODER,pin*2);SET_BIT(GPIOH_MODER,(pin*2+1));break;
		case ANALOG_MODE:SET_BIT(GPIOH_MODER,pin*2);SET_BIT(GPIOH_MODER,(pin*2+1));break;
		}
	break;

	}
}
//////////////////////////////////////////////////////////////////////////////////////////////


void GPIO_void_setPin_Output_Type(PORT_ID port , PIN_ID pin , OUTPUT_TYPE output_type)
{
	switch(port)
	{
	case PORT_A:
		switch(output_type)
		{
		case OUTPUT_PUSH_PULL: Clear_bit(GPIOA_OTYPER,pin);break;
		case OUTPUT_OPEN_DRAIN:SET_BIT(GPIOA_OTYPER,pin);break;
		}
	break;

	case PORT_B:
		switch(output_type)
		{
		case OUTPUT_PUSH_PULL: Clear_bit(GPIOB_OTYPER,pin);break;
		case OUTPUT_OPEN_DRAIN:SET_BIT(GPIOB_OTYPER,pin);break;
		}
	break;

	case PORT_C:
		switch(output_type)
		{
		case OUTPUT_PUSH_PULL: Clear_bit(GPIOC_OTYPER,pin);break;
		case OUTPUT_OPEN_DRAIN:SET_BIT(GPIOC_OTYPER,pin);break;
		}
	break;

	case PORT_D:
		switch(output_type)
		{
		case OUTPUT_PUSH_PULL: Clear_bit(GPIOD_OTYPER,pin);break;
		case OUTPUT_OPEN_DRAIN:SET_BIT(GPIOD_OTYPER,pin);break;
		}
	break;

	case PORT_E:
		switch(output_type)
		{
		case OUTPUT_PUSH_PULL: Clear_bit(GPIOE_OTYPER,pin);break;
		case OUTPUT_OPEN_DRAIN:SET_BIT(GPIOE_OTYPER,pin);break;
		}
	break;

	case PORT_H:
		switch(output_type)
		{
		case OUTPUT_PUSH_PULL: Clear_bit(GPIOH_OTYPER,pin);break;
		case OUTPUT_OPEN_DRAIN:SET_BIT(GPIOH_OTYPER,pin);break;
		}
	break;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////
void GPIO_void_setPin_value(PORT_ID port , PIN_ID pin , PIN_VALUE value)
{
	if(value == LOW)
	{
		switch(port)
		{

		case PORT_A:  Clear_bit(GPIOA_ODR,pin); break;
		case PORT_B:  Clear_bit(GPIOB_ODR,pin); break;
		case PORT_C:  Clear_bit(GPIOC_ODR,pin); break;
		case PORT_D:  Clear_bit(GPIOD_ODR,pin); break;
		case PORT_E:  Clear_bit(GPIOE_ODR,pin); break;
		case PORT_H:  Clear_bit(GPIOH_ODR,pin); break;
		}

	}
	else if(value == HIGH)
	{
		switch(port)
		{

		case PORT_A:  SET_BIT(GPIOA_ODR,pin); break;
		case PORT_B:  SET_BIT(GPIOB_ODR,pin); break;
		case PORT_C:  SET_BIT(GPIOC_ODR,pin); break;
		case PORT_D:  SET_BIT(GPIOD_ODR,pin); break;
		case PORT_E:  SET_BIT(GPIOE_ODR,pin); break;
		case PORT_H:  SET_BIT(GPIOH_ODR,pin); break;
		}
	}
}
//////////////////////////////////////////////////////////////////////////////
PIN_VALUE GPIO_PIN_VALUE_getPin_value(PORT_ID port , PIN_ID pin)
{
	PIN_VALUE ret_val;

	switch(port)
	{
	case PORT_A: ret_val =  GET_BIT(GPIOA_IDR,pin); break;
	case PORT_B: ret_val =  GET_BIT(GPIOB_IDR,pin); break;
	case PORT_C: ret_val =  GET_BIT(GPIOC_IDR,pin); break;
	case PORT_D: ret_val =  GET_BIT(GPIOD_IDR,pin); break;
	case PORT_E: ret_val =  GET_BIT(GPIOE_IDR,pin); break;
	case PORT_H: ret_val =  GET_BIT(GPIOH_IDR,pin); break;
	}

	return ret_val;
}
///////////////////////////////////////////////////////////////////////

void LOCK_PIN_CONFIG(PORT_ID port,PIN_ID pin, PIN_STATUS PIN_STATUS)
{
	if(PIN_STATUS == LOCK_PIN)
	{
		switch(port)
		{

		case PORT_A:  SET_BIT(GPIOA_LCKR,pin); break;
		case PORT_B:  SET_BIT(GPIOB_LCKR,pin); break;
		case PORT_C:  SET_BIT(GPIOC_LCKR,pin); break;
		case PORT_D:  SET_BIT(GPIOD_LCKR,pin); break;
		case PORT_E:  SET_BIT(GPIOE_LCKR,pin); break;
		case PORT_H:  SET_BIT(GPIOH_LCKR,pin); break;
		}
	}
	else if(PIN_STATUS ==  UNLOCK_PIN)
	{
		switch(port)
		{

		case PORT_A:  Clear_bit(GPIOA_LCKR,pin); break;
		case PORT_B:  Clear_bit(GPIOB_LCKR,pin); break;
		case PORT_C:  Clear_bit(GPIOC_LCKR,pin); break;
		case PORT_D:  Clear_bit(GPIOD_LCKR,pin); break;
		case PORT_E:  Clear_bit(GPIOE_LCKR,pin); break;
		case PORT_H:  Clear_bit(GPIOH_LCKR,pin); break;
		}
	}
}


void GPIO_voidSetAltFunction(u8 Copy_u8PortID,u8 Copy_u8PinID ,u32 Copy_u8AltValue)
{
	switch(Copy_u8PortID)
	{
		case PORT_A:
			if(Copy_u8PinID < PIN8)
			{
				GPIOA_AFRL |= ( Copy_u8AltValue << (Copy_u8PinID*4) );
			}
			else
			{
				GPIOA_AFRH |= ( Copy_u8AltValue << ( (Copy_u8PinID%8) * 4 ) );
			}break;

		case PORT_B:
			if(Copy_u8PinID < PIN8)
			{
				GPIOB_AFRL |= ( Copy_u8AltValue << (Copy_u8PinID*4) );
			}
			else
			{
				GPIOB_AFRH |= ( Copy_u8AltValue << ( (Copy_u8PinID%8) * 4 ) );
			}break;

		case PORT_C:
			if(Copy_u8PinID < PIN8)
			{
				GPIOC_AFRL |= ( Copy_u8AltValue << (Copy_u8PinID*4) );
			}
			else
			{
				GPIOC_AFRH |= ( Copy_u8AltValue << ( (Copy_u8PinID%8) * 4 ) );
			}break;

		case PORT_D:
			if(Copy_u8PinID < PIN8)
			{
				GPIOD_AFRL |= ( Copy_u8AltValue << (Copy_u8PinID*4) );
			}
			else
			{
				GPIOD_AFRH |= ( Copy_u8AltValue << ( (Copy_u8PinID%8) * 4 ) );
			}break;

		case PORT_E:
			if(Copy_u8PinID < PIN8)
			{
				GPIOE_AFRL |= ( Copy_u8AltValue << (Copy_u8PinID*4) );
			}
			else
			{
				GPIOE_AFRH |= ( Copy_u8AltValue << ( (Copy_u8PinID%8) * 4 ) );
			}break;

		case PORT_H:
			if(Copy_u8PinID < PIN8)
			{
				GPIOH_AFRL |= ( Copy_u8AltValue << (Copy_u8PinID*4) );
			}
			else
			{
				GPIOH_AFRH |= ( Copy_u8AltValue << ( (Copy_u8PinID%8) * 4 ) );
			}break;
		default:
			break;
	}
}


//////////////////////////////////////////////////////////////////
