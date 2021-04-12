/*
 * usart_program.c
 *
 *  Created on: ١٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#include "usart_private.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_interface.h"
#include "GPIO_Interface.h"
//
//void usart_voidInit(void)
//{
//// set baud rate to 9600 using HSI = 16 MHZ , over8 = 0
//	USART1-> BRR = 0x0638;
//	// usart configuration
//	SET_BIT(USART1 -> CR1 , 3);
//	SET_BIT(USART1 -> CR1 , 2);
//	SET_BIT(USART1 -> CR1 , 13);
//
//	//
//}
//void usart_voidTransmit(u8 Copy_u8TransmitData)
//{
//	USART1 -> DR = Copy_u8TransmitData;
//	while ((GET_BIT(USART1 -> SR , 7)== 0));
//
//}
//u8 usart_u8Recieve(void)
//{
//	while ((GET_BIT(USART1 -> SR , 5)== 0));
//	return USART1 -> DR;
//}



void USART_voidInit(void)
{
	/*		 RCC CLK EN for USART		 */
	RCC_voidEnablePeripheralCLK(RCC_ABP1, 17);// USART2 enable

	/*		 RCC GPIOA EN 				 */
	RCC_voidEnablePeripheralCLK(RCC_AHB1,RCC_GPIOA_EN);

	/* 	TX --> PA2  Mode (AF) 	&&	 RCC_GPIOA EN 	*/
	GPIO_void_setPin_Direction(PORT_A, PIN2, ALTERNATIVE_FUNCTION_MODE);
	GPIO_void_setPin_Output_Type(PORT_A, PIN2, OUTPUT_PUSH_PULL);


	/* 	RX --> PA3  Mode (AF) 	&&	 RCC_GPIOA EN 	*/

	GPIO_void_setPin_Direction(PORT_A, PIN3, ALTERNATIVE_FUNCTION_MODE);
	GPIO_void_setPin_Output_Type(PORT_A, PIN3, OUTPUT_PUSH_PULL);

	/* 		Alternative function 7 for PA2	 	 */
	GPIO_voidSetAltFunction(PORT_A, PIN2, AF7);

	/* 		Alternative function 7 for PA3  	 */
	GPIO_voidSetAltFunction(PORT_A, PIN3, AF7);


	/* Set baud rate 9600 on HSI = 16 MHZ */
	USART2->BRR = 0x0683;

	/*	Receive Enable	*/
	SET_BIT(USART2->CR1,2);

	/*  transmit Enable */
	SET_BIT(USART2->CR1,3);

	/* 	1 Start bit, 8 Data bits, n Stop bit 	 */
	Clear_bit(USART2->CR1,12);

	/*	 1 stop bit		*/
	Clear_bit(USART2->CR2,12);
	Clear_bit(USART2->CR2,13);

	/*	 Enable USART2	 */
	SET_BIT(USART2->CR1,13);

}

void USART_voidTransmit(u8 Copy_u8TransmitData)
{
	/*		Local Variable for time out 	*/
	u32 Local_u32TimeOut = 0;

	/*	 Write Data to send		*/
	USART2->DR = Copy_u8TransmitData;

	/* 		polling with time out technique		 */
	while( (GET_BIT(USART2->SR,7) == 0) && (Local_u32TimeOut < 100000000) )
	{
		Local_u32TimeOut++;
	}
}

u8 USART_u8Receive(void)
{
	/*		Local Variable for time out 	*/
	u32 Local_u32TimeOut = 0;

	/* 		Waiting for data to be ready to read with time out   	*/
	while( (GET_BIT(USART2->SR,5) == 0) && (Local_u32TimeOut < 100000000) )
	{
		Local_u32TimeOut++;
	}
	return USART2->DR;
}
