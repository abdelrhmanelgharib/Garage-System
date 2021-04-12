/*
 * services.c
 *
 *  Created on: ٢٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#include "services.h"
#include "RCC_interface.h"
#include "GPIO_Interface.h"
#include "DC_MOTOR_Interface.h"
#include "IR_private.h"
#include "IR_interface.h"
#include "LCD_Interface.h"
#include "NVIC_interface.h"
#include "EXTI_Interface.h"


extern u8 car_count;
extern u8 Exit_Flag;


/************************************************************************************/
/**************************************OPEN DOOR*************************************/
void Open_Door(void)
{
	LCD_voidWriteCmd(0x01);// clear lcd
	LCD_void_goto(0, 3);
	LCD_void_write_string("DOOR OPENING");
	DCmotor_Direction(CLK_WISE_DIRECTION);
	delay(500);
}
/************************************************************************************/
/*************************************CLOSE DOOR*************************************/

void Close_Door(void)
{
	LCD_voidWriteCmd(0x01);// clear lcd
	LCD_void_goto(0, 3);
	LCD_void_write_string("DOOR CLOSING");
	DCmotor_Direction(ANTI_CLK_WISE_DIRECTION);
	delay(1500);
}



/************************************************************************************/
/************************************Check_Password**********************************/
u8 Check_Password(u8 *password)
{
	if (password[0] == 1 && password[1] == 2  && password[2] == 3 && password[3] == 4 && password[4] == 5  && password[5] == 6 )
	{
		return Correct_Password;
	}

		else return Wrong_Password;
}

/************************************************************************************/


void Set_All_EXTI(void)
{


	//NVIC/
	NVIC_voidInit();
/*      EXTI       */
	EXTI_voidIntialize();
	EXTI_voidEnableLine(EXTI_LINE0);
	EXTI_voidSetSignalLatch(EXTI_LINE0 ,EXTI_RISING );
	EXTI_voidEnableLine(EXTI_LINE1);
	EXTI_voidSetSignalLatch(EXTI_LINE1 ,EXTI_RISING );
	EXTI_voidEnableLine(EXTI_LINE4);
	EXTI_voidSetSignalLatch(EXTI_LINE4 ,EXTI_RISING );
	EXTI_voidEnableLine(EXTI_LINE5);
	EXTI_voidSetSignalLatch(EXTI_LINE5 ,EXTI_RISING );
	RCC_voidEnablePeripheralCLK(RCC_ABP2, 14);//sys config//system Config. Rcc Enable/EXTI
	//set priority
	NVIC_voidSetPriority(0b1010, 6);
	NVIC_voidSetPriority(0b1010, 7);
	NVIC_voidSetPriority(0b0101, 10);// highesh priority for fire alarm
	NVIC_voidSetPriority(0b0111, 23);// second highest priority for IR- Obstcale checker

/*  EXTI0*/
	NVIC_voidEnablePeripheral(6);
	NVIC_voidEnablePeripheral(7);
	NVIC_voidEnablePeripheral(10);
	NVIC_voidEnablePeripheral(23);// pg203
}


