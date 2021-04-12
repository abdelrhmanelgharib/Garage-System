/*
 * DC_MOTOR_Interface.h
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */
#include "STD_Types.h"

#ifndef DC_MOTOR_INTERFACE_H_
#define DC_MOTOR_INTERFACE_H_


#define   CLK_WISE_DIRECTION              0
#define   ANTI_CLK_WISE_DIRECTION         1

void DCmotor_init(void);

void DCmotor_Stop(void);

void DCmotor_Direction(u32 direction);

//void DCmotor_Move(u8 speed);


#endif /* DC_MOTOR_INTERFACE_H_ */
