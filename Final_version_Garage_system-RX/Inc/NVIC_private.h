/*
 * NVIC_interface.h
 *
 *  Created on: ١٦‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

#define NVIC_BASE_ADDRESS		(0xE000E000)
#define NVIC_ISER0				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x100)))
#define NVIC_ISER1				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x104)))
#define NVIC_ISER2				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x108)))
#define NVIC_ISER3				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x10C)))

#define NVIC_ICER0				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x180)))
#define NVIC_ICER1				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x184)))
#define NVIC_ICER2				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x188)))
#define NVIC_ICER3				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x18C)))

#define NVIC_ISPPR0				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x200)))
#define NVIC_ISPPR1				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x204)))
#define NVIC_ISPPR2				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x208)))
#define NVIC_ISPPR3				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x20C)))

#define NVIC_ICPR0				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x280)))
#define NVIC_ICPR1				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x284)))
#define NVIC_ICPR2				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x288)))
#define NVIC_ICPR3				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x28C)))

#define NVIC_IABR0				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x300)))
#define NVIC_IABR1				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x304)))
#define NVIC_IABR2				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x308)))
#define NVIC_IABR3				(*((volatile u32*) (NVIC_BASE_ADDRESS+0x30C)))


#define NVIC_IPRx                  ((u8*)(NVIC_BASE_ADDRESS + 0x400))


#define  _16_GROUPS_0SUB     		0x05FA0300
#define  _8_GROUPS_2SUB 			0x05FA0400
#define  _4_GROUPS_4SUB				0x05FA0500
#define  _2_GROUPS_8SUB				0x05FA0600
#define  _0_GROUPS_16SUB			0x05FA0700

#endif /* NVIC_PRIVATE_H_*/
