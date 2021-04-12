/*
 * NVIC_program.c
 *
 *  Created on: ١٦‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "NVIC_config.h"
#include "NVIC_interface.h"
#include "NVIC_private.h"

void	NVIC_voidInit(void)
{
// SCB
#ifndef SCB_BASE_ADDRESS
#define SCB_BASE_ADDRESS     0xE000ED00
#endif

#ifndef SCB_AIRCR
#define SCB_AIRCR     *((volatile u32*)(SCB_BASE_ADDRESS + 0x0C))
#endif

SCB_AIRCR = NVIC_NO_GROUPS_SUB;
}
/*			NVIC enable peripheral (gowa el core)*/
void	NVIC_voidEnablePeripheral(u8 Copy_u8InterruptNmb)
{
	//range check
		if (Copy_u8InterruptNmb < 32)//doxy gen
		{
		//ISER0 (0:31)
		//SET_BIT(NVIC_ISER0 , Copy_u8InterruptNmb);
		//Read-Modify-Write

		NVIC_ISER0 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 64)

			{
					/*  re-scale Interrupt NUMBER       */
					Copy_u8InterruptNmb -= 32;
					/* ISER1  (0:31)                    */
					/* READ - Modify - Write            */
					//SET_BIT(NVIC_ISER1 ,Copy_u8InterruptNmb );

					NVIC_ISER1 = (1 << Copy_u8InterruptNmb);
			}
			else if(Copy_u8InterruptNmb < 96)

			{
					/*  re-scale Interrupt NUMBER       */
					Copy_u8InterruptNmb -= 64;
					/* ISER2  (0:31) */
					/* READ - Modify - Write*/
					//SET_BIT(NVIC_ISER2 ,Copy_u8InterruptNmb );

					NVIC_ISER2 = (1 << Copy_u8InterruptNmb);
			}
			else if(Copy_u8InterruptNmb < 128)

			{
					/*  re-scale Interrupt NUMBER       */
					Copy_u8InterruptNmb -= 96;
					/* ISER3  (0:31)                    */
					/* READ - Modify - Write            */
					//SET_BIT(NVIC_ISER3 ,Copy_u8InterruptNmb );

					NVIC_ISER3 = (1 << Copy_u8InterruptNmb);
			}
}
void	NVIC_voidDisablePeripheral(u8 Copy_u8InterruptNmb)
{
	/*      range check                    */
		if(Copy_u8InterruptNmb < 32)
		{
			/* ISER0  (0:31)                   */
			/* READ - Modify - Write           */
			//SET_BIT(NVIC_ISER0 ,Copy_u8InterruptNmb );

			NVIC_ICER0 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 64)

		{
				/*  re-scale Interrupt NUMBER       */
				Copy_u8InterruptNmb -= 32;
				/* ISER1  (0:31)                    */
				/* READ - Modify - Write            */
				//SET_BIT(NVIC_ISER1 ,Copy_u8InterruptNmb );

				NVIC_ICER1 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 96)

		{
				/*  re-scale Interrupt NUMBER       */
				Copy_u8InterruptNmb -= 64;
				/* ISER2  (0:31) */
				/* READ - Modify - Write*/
				//SET_BIT(NVIC_ISER2 ,Copy_u8InterruptNmb );

				NVIC_ICER2 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 128)

		{
				/*  re-scale Interrupt NUMBER       */
				Copy_u8InterruptNmb -= 96;
				/* ISER3  (0:31)                    */
				/* READ - Modify - Write            */
				//SET_BIT(NVIC_ISER3 ,Copy_u8InterruptNmb );

				NVIC_ICER3 = (1 << Copy_u8InterruptNmb);
		}
}
void	NVIC_voidSetPendingFlag(u8 Copy_u8InterruptNmb)
{
	/*      range check                    */
		if(Copy_u8InterruptNmb < 32)
		{
			/* ISER0  (0:31)                   */
			/* READ - Modify - Write           */
			//SET_BIT(NVIC_ISER0 ,Copy_u8InterruptNmb );

			NVIC_ISPPR0	 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 64)

		{
				/*  re-scale Interrupt NUMBER       */
				Copy_u8InterruptNmb -= 32;
				/* ISER1  (0:31)                    */
				/* READ - Modify - Write            */
				//SET_BIT(NVIC_ISER1 ,Copy_u8InterruptNmb );

				NVIC_ISPPR1 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 96)

		{
				/*  re-scale Interrupt NUMBER       */
				Copy_u8InterruptNmb -= 64;
				/* ISER2  (0:31) */
				/* READ - Modify - Write*/
				//SET_BIT(NVIC_ISER2 ,Copy_u8InterruptNmb );

				NVIC_ISPPR2 = (1 << Copy_u8InterruptNmb);
		}
		else if(Copy_u8InterruptNmb < 128)

		{
				/*  re-scale Interrupt NUMBER       */
				Copy_u8InterruptNmb -= 96;
				/* ISER3  (0:31)                    */
				/* READ - Modify - Write            */
				//SET_BIT(NVIC_ISER3 ,Copy_u8InterruptNmb );

				NVIC_ISPPR3 = (1 << Copy_u8InterruptNmb);
		}
}
void	NVIC_voidClearPendingFlag(u8 Copy_u8InterruptNmb)
{

	/*      range check                    */
	if(Copy_u8InterruptNmb < 32)
	{
		/* ISER0  (0:31)                   */
		/* READ - Modify - Write           */
		//SET_BIT(NVIC_ISER0 ,Copy_u8InterruptNmb );

		NVIC_ICPR0 = (1 << Copy_u8InterruptNmb);
	}
	else if(Copy_u8InterruptNmb < 64)

	{
			/*  re-scale Interrupt NUMBER       */
			Copy_u8InterruptNmb -= 32;
			/* ISER1  (0:31)                    */
			/* READ - Modify - Write            */
			//SET_BIT(NVIC_ISER1 ,Copy_u8InterruptNmb );

			NVIC_ICPR1 = (1 << Copy_u8InterruptNmb);
	}
	else if(Copy_u8InterruptNmb < 96)

	{
			/*  re-scale Interrupt NUMBER       */
			Copy_u8InterruptNmb -= 64;
			/* ISER2  (0:31) */
			/* READ - Modify - Write*/
			//SET_BIT(NVIC_ISER2 ,Copy_u8InterruptNmb );

			NVIC_ICPR2 = (1 << Copy_u8InterruptNmb);
	}
	else if(Copy_u8InterruptNmb < 128)

	{
			/*  re-scale Interrupt NUMBER       */
			Copy_u8InterruptNmb -= 96;
			/* ISER3  (0:31)                    */
			/* READ - Modify - Write            */
			//SET_BIT(NVIC_ISER3 ,Copy_u8InterruptNmb );

			NVIC_ICPR3 = (1 << Copy_u8InterruptNmb);
	}
}
u8	NVIC_voidu8GetActiveFlag(u8 Copy_u8InterruptNmb)
{
	u8 Local_u8ActiveBit=5;

		if(Copy_u8InterruptNmb < 32)
		{

			Local_u8ActiveBit = (GET_BIT(NVIC_IABR0,Copy_u8InterruptNmb));
		}
		else if(Copy_u8InterruptNmb < 64)

		{

				Copy_u8InterruptNmb -= 32;

				Local_u8ActiveBit = (GET_BIT(NVIC_IABR1,Copy_u8InterruptNmb));
		}
		else if(Copy_u8InterruptNmb < 96)

		{

				Copy_u8InterruptNmb -= 64;

				Local_u8ActiveBit = (GET_BIT(NVIC_IABR2,Copy_u8InterruptNmb));
		}
		else if(Copy_u8InterruptNmb < 128)

		{

				Copy_u8InterruptNmb -= 96;

				Local_u8ActiveBit = (GET_BIT(NVIC_IABR3,Copy_u8InterruptNmb));
		}
		else
		{
			/*        return error       */
		}
		return Local_u8ActiveBit;
}
void	NVIC_voidSetPriority(u8 Copy_u8Priority,u8 Copy_u8InterruptNmb)
{
	if(Copy_u8InterruptNmb < 97)
		{
			NVIC_IPRx[Copy_u8InterruptNmb] = (Copy_u8Priority << 4);
		}
		else
		{
			/*         Return  Error*/
		}
}
