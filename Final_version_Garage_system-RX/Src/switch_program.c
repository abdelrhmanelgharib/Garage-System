/*
 * switch_program.c
 *
 *  Created on: ١٣‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */


#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "switch_interface.h"
#include "switch_config.h"

void SW_voidIntialize(u8 switch_num)
{
if (switch_num == SW0)
{
	Clear_bit(SW0_port_mode,(SW0_pin_number*2));
	Clear_bit(SW0_port_mode,((SW0_pin_number*2)+1));
}
else if (switch_num == SW1)
{
	Clear_bit(SW1_port_mode,(SW1_pin_number*2));
	Clear_bit(SW1_port_mode,((SW1_pin_number*2)+1));
}

}

u8 SW_u8GetState(u8 switch_num)
{
	u8 result;
	u8 status;
	if (switch_num == SW0)
	{
     #if(SW_0_CONNECTION == PULL_UP)
		{
			 result = GET_BIT(SW0_IDR,SW0_pin_number);
			 if ( result == HIGH )
			 {
				 status = PRESSED;
			 }
			 else  if ( result == LOW )
			 {
				 status = NOT_PRESSED;
			 }

		}
	#else
		{
			result = DIO_u8GetPin(SW_0_PIN);

			 if ( result == LOW )
			 {
				 status = NOT_PRESSED;
			 }
			 else  if ( result == HIGH )
			 {
				 status = PRESSED;
			 }
		}
	#endif
	}
	else if (switch_num == SW1)
		{
	     #if(SW_0_CONNECTION == PULL_UP)
			{
				 result = GET_BIT(SW1_IDR,SW1_pin_number);
				 if ( result == HIGH )
				 {
					 status = PRESSED;
				 }
				 else  if ( result == LOW )
				 {
					 status = NOT_PRESSED;
				 }

			}
		#else
			{
				result = DIO_u8GetPin(SW1_pin_number);

				 if ( result == LOW )
				 {
					 status = NOT_PRESSED;
				 }
				 else  if ( result == HIGH )
				 {
					 status = PRESSED;
				 }
			}
		#endif
		}

	return status;
}
