/*
 * switch_interface.h
 *
 *  Created on: ١٣‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_

#include "STD_types.h"

#define PRESSED 1
#define NOT_PRESSED 0


#define SW0 0
#define SW1 1


#define HIGH        1
#define LOW         0


void SW_voidIntialize(u8 switch_num);
u8 SW_u8GetState(u8 switch_num);

#endif /* SWITCH_INTERFACE_H_ */
