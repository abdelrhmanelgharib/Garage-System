/*
 * services.h
 *
 *  Created on: ٢٤‏/٠٣‏/٢٠٢١
 *      Author: Nada
 */

#ifndef SERVICES_H_
#define SERVICES_H_


#include "STD_TYPES.h"

#define Correct_Password	1
#define Wrong_Password	0

void Close_Door(void);
void Open_Door(void);
u8 Check_Password(u8 *password);
void Set_All_EXTI(void);

#endif /* SERVICES_H_ */
