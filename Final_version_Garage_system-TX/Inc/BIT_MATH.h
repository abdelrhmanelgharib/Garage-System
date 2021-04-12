/*
 * bitmath.h
 *
 *  Created on: ??�/??�/????
 *      Author: Nada Mohammed Salah
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define TOGGLE_BIT(PORT,PIN) ((PORT) = ((PORT) ^ (1<< (PIN))))
#define GET_BIT(PORT,pin) (((PORT)>>(pin)) & 0x01)
#define SET_BIT(PORT,pin) ((PORT) |= (1<< (pin)))
#define Clear_bit(PORT,pin) ((PORT) &= ~(1<< (pin)))
#define set_first_nibble(PORT) ((PORT)|=0b11110000)
#define set_second_nibble(PORT) ((PORT)|=0b00001111)
#define clear_first_nibble(PORT) ((PORT)&=0b00001111)
#define clear_second_nibble(PORT) ((PORT)&=0b11110000)

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )
#endif /* BIT_MATH_H_ */
