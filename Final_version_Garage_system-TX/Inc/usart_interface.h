/*
 * usart_interface.h
 *
 *  Created on: ١٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_

void USART_voidInit(void);
void USART_voidTransmit(u8 Copy_u8TransmitData);
u8 USART_u8Receive(void);

#endif /* USART_INTERFACE_H_ */
