/*
 * EXTI_Interface.h
 *
 *  Created on: Mar 17, 2021
 *      Author: Nada
 */

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

void EXTI_voidIntialize(void);
void EXTI_voidEnableLine(u8 Copy_u8LineNo);
void EXTI_voidDisableLine(u8 Copy_u8LineNo);
void EXTI_voidSoftwareInterruptTrigger(u8 Copy_u8LineNo);
void EXTI_voidSetSignalLatch(u8 Copy_u8LineNo , u8 Copy_u8EdgeTrigger);

void EXTI_voidSetCallBack(void(*pf)(void)/* 0x55*/,void(*pf1)(void)/* 0x55*/,void(*pf2)(void)/* 0x55*/,void(*pf3)(void)/* 0x55*/);
//void EXTI_voidSetSignalLatch(u8 Copy_u8LineNo , u8 Copy_u8EdgeTrigger);

#define  EXTI_LINE0            0
#define  EXTI_LINE1            1
#define  EXTI_LINE2            2
#define  EXTI_LINE3            3
#define  EXTI_LINE4            4
#define  EXTI_LINE5            5
#define  EXTI_LINE6            6
#define  EXTI_LINE7            7
#define  EXTI_LINE8            8
#define  EXTI_LINE9            9
#define  EXTI_LINE10           10
#define  EXTI_LINE11           11
#define  EXTI_LINE12           12
#define  EXTI_LINE13           13
#define  EXTI_LINE14           14
#define  EXTI_LINE15           15

#define EXTI_RISING            2
#define EXTI_FALLING           5
#define EXTI_IOC               7

#endif /* EXTI_INTERFACE_H_ */
