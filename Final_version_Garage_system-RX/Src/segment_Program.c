/*
 * segment.c
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */

#include "segment_config.h"
#include "segment_interface.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "GPIO_Interface.h"

void SEVSEG_VoidInitialize(u8 seg_num)
{
	if(seg_num == SEG0)
	{
	GPIO_void_setPin_Direction(SEG0_PORT, segment0_a_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_a_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG0_PORT, segment0_b_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_b_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG0_PORT, segment0_c_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_c_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG0_PORT, segment0_d_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_d_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG0_PORT, segment0_e_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_e_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG0_PORT, segment0_f_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_f_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG0_PORT, segment0_g_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_g_pin, OUTPUT_PUSH_PULL);
	}
	else if(seg_num == SEG1)
	{
	GPIO_void_setPin_Direction(SEG1_PORT, segment1_a_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_a_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG1_PORT, segment1_b_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_b_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG1_PORT, segment1_c_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_c_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG1_PORT, segment1_d_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_d_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG1_PORT, segment1_e_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_e_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG1_PORT, segment1_f_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_f_pin, OUTPUT_PUSH_PULL);

	GPIO_void_setPin_Direction(SEG1_PORT, segment1_g_pin, GENERAL_PURPOSE_OUTPUT_MODE);
	GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_g_pin, OUTPUT_PUSH_PULL);
	}

}
void SEVSEG_VoidDisplay(u8 seg_num,u8 num_to_display)
{                  if(seg_num == SEG0)
					{
					if(num_to_display == 0)
					{
						segment0_ODR = 0x003f;//display 0
					}
					else if(num_to_display ==1 )
					{
						segment0_ODR = 0x0006;//display 1
					}

					else if(num_to_display ==2 )
					{
						segment0_ODR = 0x005B;//display 2
					}
					else if(num_to_display ==3 )
					{
						segment0_ODR = 0x004F;//display 3
					}
					else if(num_to_display ==4 )
					{
						segment0_ODR = 0x0066;//display 4
					}

					else if(num_to_display ==5 )
					{
						segment0_ODR = 0x006D;//display 5
					}
					else if(num_to_display ==6 )
					{
						segment0_ODR = 0x007D;//display 6
					}
					else if(num_to_display ==7 )
					{
						segment0_ODR = 0x0007;//display 7
					}
					else if(num_to_display ==8 )
					{
						segment0_ODR = 0x007F;//display 8
					}
					else if(num_to_display ==9 )
					{
						segment0_ODR = 0x006F;//display 9
					}
				}// end if

else if(seg_num == SEG1)
					{
					if(num_to_display == 0)
					{
						segment1_ODR = 0x003f;//display 0
					}
					else if(num_to_display ==1 )
					{
						segment1_ODR = 0x0006;//display 1
					}

					else if(num_to_display ==2 )
					{
						segment1_ODR = 0x005B;//display 2
					}
					else if(num_to_display ==3 )
					{
						segment1_ODR = 0x004F;//display 3
					}
					else if(num_to_display ==4 )
					{
						segment1_ODR = 0x0066;//display 4
					}

					else if(num_to_display ==5 )
					{
						segment1_ODR = 0x006D;//display 5
					}
					else if(num_to_display ==6 )
					{
						segment1_ODR = 0x007D;//display 6
					}
					else if(num_to_display ==7 )
					{
						segment1_ODR = 0x0007;//display 7
					}
					else if(num_to_display ==8 )
					{
						segment1_ODR = 0x007F;//display 8
					}
					else if(num_to_display ==9 )
					{
						segment1_ODR = 0x006F;//display 9
					}
				}
}


void SEVSEG_VoidEnable(u8 seg_num)
{
	if(seg_num == SEG0)
	{

		GPIO_void_setPin_Direction(SEG0_PORT, segment0_enable_pin, GENERAL_PURPOSE_OUTPUT_MODE);
		GPIO_void_setPin_Output_Type(SEG0_PORT, segment0_enable_pin, OUTPUT_PUSH_PULL);
		SET_BIT(segment0_ODR,segment0_enable_pin);
	}
	else if(seg_num == SEG1)
	{

		GPIO_void_setPin_Direction(SEG1_PORT, segment1_enable_pin, GENERAL_PURPOSE_OUTPUT_MODE);
		GPIO_void_setPin_Output_Type(SEG1_PORT, segment1_enable_pin, OUTPUT_PUSH_PULL);
		SET_BIT(segment1_ODR,segment1_enable_pin);

	}
}
void SEVSEG_VoidDisable(u8 seg_num)
{
	if(seg_num == SEG0)
	{

		Clear_bit(segment0_ODR,segment0_enable_pin);
	}
	else if(seg_num == SEG1)
	{
		Clear_bit(segment1_ODR,segment1_enable_pin);
	}
}
