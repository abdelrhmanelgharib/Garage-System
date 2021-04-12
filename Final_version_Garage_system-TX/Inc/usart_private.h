/*
 * usart_private.h
 *
 *  Created on: ١٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_

#include "STD_TYPES.h"

typedef struct
{
	volatile u32 SR;
	volatile u32 DR;
	volatile u32 BRR;
	volatile u32 CR1;
	volatile u32 CR2;
	volatile u32 CR3;
	volatile u32 GTPR;
}USART_TYPE;


#define USART1 ((USART_TYPE *)(0x40011000))
#define USART2 ( (USART_TYPE*)(0x40004400) )


#endif /* USART_PRIVATE_H_ */
