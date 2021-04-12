/*
 * NVIC_interface.h
 *
 *  Created on: ١٦‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_





void	NVIC_voidInit(void);
/*			NVIC enable peripheral (gowa el core)*/
void	NVIC_voidEnablePeripheral(u8 Copy_u8InterruptNmb);
void	NVIC_voidDisablePeripheral(u8 Copy_u8InterruptNmb);
void	NVIC_voidSetPendingFlag(u8 Copy_u8InterruptNmb);
void	NVIC_voidClearPendingFlag(u8 Copy_u8InterruptNmb);
u8	NVIC_voidu8GetActiveFlag(u8 Copy_u8InterruptNmb);
void	NVIC_voidSetPriority(u8 Copy_u8Priority,u8 Copy_u8InterruptNmb);
#endif /* NVIC_INTERFACE_H_ */
