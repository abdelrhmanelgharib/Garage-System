/*
 * EXTI_Program.c
 *
 *  Created on: Mar 17, 2021
 *      Author: Nada
 */

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "EXTI_Interface.h"
#include "EXTI_Private.h"
#include "EXTI_Config.h"

#ifndef NULL
#define NULL (void*)0
#endif

static void (*EXTI_pfCallBack0)(void)= NULL;
static void (*EXTI_pfCallBack1)(void)= NULL;
static void (*EXTI_pfCallBack2)(void)= NULL;
static void (*EXTI_pfCallBack3)(void)= NULL;

void EXTI_voidIntialize(void)
{
	/*          For All Lines:
	 * 			1-	disable
	 * 			2-	clear all flags
	 *                                          */


	EXTI -> IMR =0;                    // all lines disabled
	EXTI -> PR = 0XFFFFFFFF;           //all flags cleared


}
void EXTI_voidEnableLine(u8 Copy_u8LineNo)
{
/*        Range check    */
	if(Copy_u8LineNo <16)
	{
		SET_BIT(EXTI -> IMR,Copy_u8LineNo );
	}
}
void EXTI_voidDisableLine(u8 Copy_u8LineNo)
{
	/*        Range check    */
	if(Copy_u8LineNo <16)
	{
		Clear_bit(EXTI ->IMR,Copy_u8LineNo );
	}
}
void EXTI_voidSoftwareInterruptTrigger(u8 Copy_u8LineNo)
{
	/*task*/
}
void EXTI_voidSetSignalLatch(u8 Copy_u8LineNo , u8 Copy_u8EdgeTrigger)
{
	/*        Range check    */
	if(Copy_u8LineNo <16)
	{
		switch(Copy_u8EdgeTrigger)
		{
			case EXTI_RISING  : SET_BIT(EXTI -> RTSR ,Copy_u8LineNo);
								Clear_bit(EXTI -> FTSR ,Copy_u8LineNo);
			break;

			case EXTI_FALLING : SET_BIT(EXTI -> FTSR ,Copy_u8LineNo);
								Clear_bit(EXTI -> RTSR ,Copy_u8LineNo);
			break;

			case EXTI_IOC     : SET_BIT(EXTI -> RTSR ,Copy_u8LineNo);
							    SET_BIT(EXTI -> FTSR ,Copy_u8LineNo);
			break;

		}
	}
}

void EXTI0_IRQHandler(void)
{
	EXTI_pfCallBack0();
	SET_BIT(EXTI-> PR , 0);
}
void EXTI1_IRQHandler(void)
{
	EXTI_pfCallBack1();
	SET_BIT(EXTI-> PR , 1);
}
void EXTI4_IRQHandler(void)
{
	EXTI_pfCallBack2();
	SET_BIT(EXTI-> PR , 4);
}
void EXTI9_5_IRQHandler(void)
{
	EXTI_pfCallBack3();
	SET_BIT(EXTI-> PR , 5);
}

void EXTI_voidSetCallBack(void(*pf)(void)/* 0x55*/,void(*pf1)(void)/* 0x55*/,void(*pf2)(void)/* 0x55*/,void(*pf3)(void)/* 0x55*/)
{
	if (pf != NULL && pf1 != NULL && pf2 != NULL && pf3 != NULL)
	{
		EXTI_pfCallBack0= pf;
		EXTI_pfCallBack1= pf1;
		EXTI_pfCallBack2= pf2;
		EXTI_pfCallBack3= pf3;
	}
}




