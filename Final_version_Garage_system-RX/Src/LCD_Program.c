/*
 * LCD_Prog.c
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */

#include "LCD_Interface.h"
#include "LCD_Config.h"
#include "BIT_MATH.h"
#include "GPIO_Interface.h"
#include "RCC_private.h"


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
static void voidExecute(u8 copy_u8Value);
//void delay(u32 Copy_u32Time)
//{
//	for(u32 i = 0 ; i < Copy_u32Time ; i++)
//	{
//		for(u16 j = 0 ; j < 565 ; j++)
//		{
//			asm("NOP");
//		}
//	}
//}
void LCD_void_init(lcd_mode mode)
{
	GPIO_void_setPin_Direction(LCD_4BITS_PORT, LCD_RS_PIN , OUTPUT);
	//GPIO_void_setPin_Direction(LCD_4BITS_PORT, LCD_RS_PIN,OUTPUT_PUSH_PULL);
	GPIO_void_setPin_Direction(LCD_4BITS_PORT, LCD_E_PIN , OUTPUT);
	//GPIO_void_setPin_Direction(LCD_4BITS_PORT, LCD_E_PIN,OUTPUT_PUSH_PULL);
//	if(mode == LCD_enum_8BITS_MODE)
//	{
//		// port pins direction = output
//		DIO_void_setPort_direction(LCD_8BITS_DATA_PORT , 0xff);
//
//		//lcd init commands
//
//		_delay_ms(30);
//		LCD_void_send_command(0x38);
//		_delay_ms(1);
//		LCD_void_send_command(0x0E);
//		_delay_ms(1);
//		LCD_void_send_command(0x01);
//		_delay_ms(3);
//	}
	if(mode == LCD_enum_4BITS_MODE)
	{
		GPIO_void_setPin_Direction(LCD_4BITS_PORT , LCD_4BITS_PIN1 , OUTPUT);
		GPIO_void_setPin_Direction(LCD_4BITS_PORT , LCD_4BITS_PIN2 , OUTPUT);
		GPIO_void_setPin_Direction(LCD_4BITS_PORT , LCD_4BITS_PIN3 , OUTPUT);
		GPIO_void_setPin_Direction(LCD_4BITS_PORT , LCD_4BITS_PIN4 , OUTPUT);

		delay(30);
		LCD_voidWriteCmd(0x02);
		delay(1);
		LCD_voidWriteCmd(0x28);
		delay(1);
		LCD_voidWriteCmd(0x0E);
		delay(1);
		LCD_voidWriteCmd(0x01);
		delay(1);
		LCD_voidWriteCmd(0x06);
		delay(3);
	}
}

extern void LCD_voidWriteData(u8 copy_u8data)
{
	GPIO_void_setPin_value(LCD_4BITS_PORT, LCD_RS_PIN, HIGH); //RS = 1 to write data

		//execute data

		voidExecute(copy_u8data);

}
/////////////////////////////////////////////////////////////////
extern void LCD_voidWriteCmd(u8 copy_u8data)
{
	GPIO_void_setPin_value(LCD_4BITS_PORT, LCD_RS_PIN, LOW); //RS = 0 to write command

	//execute data

	voidExecute(copy_u8data);
}
////////////////////////////////////////////////////////
static void voidExecute(u8 copy_u8Value)
{
	//GPIO_void_setPin_value(LCD_RW_PIN ,LOW );//RW=0 to write data

	if(GET_BIT(copy_u8Value,4))  //check bit4 of value equal 1 or no
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT, LCD_4BITS_PIN1,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN1,LOW);
	}

	if(GET_BIT(copy_u8Value,5))  //check bit5 of value equal 1 or no
	{

		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN2,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN2,LOW);
	}

	if(GET_BIT(copy_u8Value,6))  //check bit6 of value equal 1 or no
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN3,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN3,LOW);
	}

	if(GET_BIT(copy_u8Value,7))  //check bit7 of value equal 1 or no
	{

		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN4,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN4,LOW);
	}
   /************  enable  pulse*********************/
   /* E = 1 */
	GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_E_PIN,HIGH);
	delay(1);

	       /*E = 0*/
	GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_E_PIN,LOW);
	delay(1);

	//send first for bits

	if(GET_BIT(copy_u8Value,0))  //check bit0 of value equal 1 or no
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN1,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN1,LOW);
	}

	if(GET_BIT(copy_u8Value,1))  //check bit1 of value equal 1 or no
	{

		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN2,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN2,LOW);
	}

	if(GET_BIT(copy_u8Value,2))  //check bit2 of value equal 1 or no
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN3,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN3,LOW);
	}

	if(GET_BIT(copy_u8Value,3))  //check bit3 of value equal 1 or no
	{

		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN4,HIGH);
	}
	else
	{
		GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_4BITS_PIN4,LOW);
	}
	   /************  enable  pulse*********************/
	 /* E = 1 */
	GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_E_PIN,HIGH);
	delay(1);

		/*E = 0*/
	 GPIO_void_setPin_value(LCD_4BITS_PORT,LCD_E_PIN,LOW);
	 delay(1);

}//function end

////////////////////////////////////////////////////////
void LCD_void_write_string(u8* str)
{

	delay(3);
	u8 counter=0;
	while(str[counter] != '\0')
	{
		LCD_voidWriteData(str[counter]);
		counter++;
	}
}
void LCD_void_print_unsigned_integer(u32 number)
{
	delay(3);
	u8 arr[16];
	u8 counter = 0 ;
	if (number == 0)
	{
		LCD_voidWriteData('0');
	}
	while(number && (counter<16))
	{
		arr[counter++]= number % 10;
		number /= 10;
	}
	while (counter)
	{
		LCD_voidWriteData(arr[--counter]+ 48);
	}
}
void LCD_void_goto(u8 raw , u8 col)
{
	switch(raw)
	{
	case 0 : if((col <16) && (col >= 0))
		{
		LCD_voidWriteCmd(0x80 + col);
		}
	break;
	case 1 : if((col <16) && (col >= 0))
		{
		LCD_voidWriteCmd(0xc0 + col);
		}
	break;
	}
}
