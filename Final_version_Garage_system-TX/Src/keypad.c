/*
 * keypad.c
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "keypad.h"
#include "keypad_config.h"

void  KeyPad_Intialize(void)
{

	//set rows as input
	//port c pin 0
	Clear_bit(keypad_port_mode,0);
	Clear_bit(keypad_port_mode,1);

	//port c pin 1
	Clear_bit(keypad_port_mode,2);
	Clear_bit(keypad_port_mode,3);
	//port c pin 2
	Clear_bit(keypad_port_mode,4);
	Clear_bit(keypad_port_mode,5);
	//port c pin 3
	Clear_bit(keypad_port_mode,6);
	Clear_bit(keypad_port_mode,7);
	//port c pin 4 // column input
	SET_BIT(keypad_port_mode,8);
	Clear_bit(keypad_port_mode,9);
	Clear_bit(keypad_port_type,4);

	//port c pin 5 // column input
	SET_BIT(keypad_port_mode,10);
	Clear_bit(keypad_port_mode,11);
	Clear_bit(keypad_port_type,5);
	//port c pin 6 // column input
	SET_BIT(keypad_port_mode,12);
	Clear_bit(keypad_port_mode,13);
	Clear_bit(keypad_port_type,6);
	//port c pin 7 // column input
	SET_BIT(keypad_port_mode,14);
	Clear_bit(keypad_port_mode,15);
	Clear_bit(keypad_port_type,7);

}


//*******************************************************************************/




static u8 KeyPad_4x4_adjustKeyNumber(u8 button_number)
{
	switch(button_number)
	{
		case 1: return 7;
				break;
		case 2: return 8;
				break;
		case 3: return 9;
				break;
		case 4: return '%'; // ASCII Code of %
				break;
		case 5: return 4;
				break;
		case 6: return 5;
				break;
		case 7: return 6;
				break;
		case 8: return '*'; /* ASCII Code of '*' */
				break;
		case 9: return 1;
				break;
		case 10: return 2;
				break;
		case 11: return 3;
				break;
		case 12: return '-'; /* ASCII Code of '-' */
				break;
		case 13: return 13;  /* ASCII of Enter */
				break;
		case 14: return 0;
				break;
		case 15: return '='; /* ASCII Code of '=' */
				break;
		case 16: return '+'; /* ASCII Code of '+' */
				break;
		default: return button_number;
	}
}

//u8 KeyPad_getPressedKey(void)
//{
//	u8 col,row;
//
//	while(1)
//	{
//		for(col=0;col<N_col;col++) /* loop for columns */
//		{
//			/*
//			 * each time only one of the column pins will be output and
//			 * the rest will be input pins include the row pins
//			 */
//			//KEYPAD_PORT_DIR = (0b00010000<<col);
//
//			/*
//			 * clear the output pin column in this trace and enable the internal
//			 * pull up resistors for the rows pins
//			 */
//			keypad_ODR = (~(0b0000000000010000<<col));
//			for(row=0;row<N_row;row++) /* loop for rows */
//			{
//				if(BIT_IS_CLEAR(keypad_IDR,row)) /* if the switch is press in this row */
//				{
//						return KeyPad_4x4_adjustKeyNumber((row*N_col)+col+1);
//
//				}
//			}
//		}
//	}
//}
u8 KeyPad_getPressedKey(void)
{
	u8 col,row;

	while(1)
	{
		for(col=0;col<N_col;col++) /* loop for columns */
		{
			/*
			 * each time only one of the column pins will be output and
			 * the rest will be input pins include the row pins
			 */
			//KEYPAD_PORT_DIR = (0b00010000<<col);

			/*
			 * clear the output pin column in this trace and enable the internal
			 * pull up resistors for the rows pins
			 */
			keypad_ODR = (~(0b0000000000010000<<col));
			for(row=0;row<N_row;row++) /* loop for rows */
			{
				if(BIT_IS_CLEAR(keypad_IDR,row)) /* if the switch is press in this row */
				{
						return KeyPad_4x4_adjustKeyNumber((row*N_col)+col+1);

				}
			}
		}
	}
}


void delay(u32 Copy_u32Time)
{
	for(u32 i = 0 ; i < Copy_u32Time ; i++)
	{
		for(u16 j = 0 ; j < 565 ; j++)
		{
			asm("NOP");
		}
	}
}
