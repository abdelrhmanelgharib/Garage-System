/*
 * GPIO_PRIVATE.h
 *
 *  Created on: Mar 8, 2021
 *      Author: NADA
 */
#include "STD_Types.h"

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_




#define GPIOA_EN  0
#define GPIOB_EN  1
#define GPIOC_EN  2
#define GPIOD_EN  3
#define GPIOE_EN  4
#define GPIOH_EN  5

////////////////////////////PORTA///////////////////////////////////
#define GPIOA_BASE_ADDRESS                 ((u32)(0x40020000))

#define GPIOA_MODER                 *((u32*)(GPIOA_BASE_ADDRESS + 0x00))
#define GPIOA_OTYPER                *((u32*)(GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_OSPEEDR               *((u32*)(GPIOA_BASE_ADDRESS + 0x08))
#define GPIOA_PUPDR                 *((u32*)(GPIOA_BASE_ADDRESS + 0x0C))
#define GPIOA_IDR                   *((u32*)(GPIOA_BASE_ADDRESS + 0x10))
#define GPIOA_ODR                   *((u32*)(GPIOA_BASE_ADDRESS + 0x14))
#define GPIOA_BSRR                  *((u32*)(GPIOA_BASE_ADDRESS + 0x18))
#define GPIOA_LCKR                  *((u32*)(GPIOA_BASE_ADDRESS + 0x1C))
#define GPIOA_AFRL                  *((u32*)(GPIOA_BASE_ADDRESS + 0x20))
#define GPIOA_AFRH                  *((u32*)(GPIOA_BASE_ADDRESS + 0x24))


////////////////////////////PORTB///////////////////////////////////
#define GPIOB_BASE_ADDRESS                 ((u32)(0x40020400))

#define GPIOB_MODER                 *((u32*)(GPIOB_BASE_ADDRESS + 0x00))
#define GPIOB_OTYPER                *((u32*)(GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_OSPEEDR               *((u32*)(GPIOB_BASE_ADDRESS + 0x08))
#define GPIOB_PUPDR                 *((u32*)(GPIOB_BASE_ADDRESS + 0x0C))
#define GPIOB_IDR                   *((u32*)(GPIOB_BASE_ADDRESS + 0x10))
#define GPIOB_ODR                   *((u32*)(GPIOB_BASE_ADDRESS + 0x14))
#define GPIOB_BSRR                  *((u32*)(GPIOB_BASE_ADDRESS + 0x18))
#define GPIOB_LCKR                  *((u32*)(GPIOB_BASE_ADDRESS + 0x1C))
#define GPIOB_AFRL                  *((u32*)(GPIOB_BASE_ADDRESS + 0x20))
#define GPIOB_AFRH                  *((u32*)(GPIOB_BASE_ADDRESS + 0x24))


///////////////////////////PORTC///////////////////////////////////
#define GPIOC_BASE_ADDRESS                 ((u32)(0x40020800))

#define GPIOC_MODER                 *((u32*)(GPIOC_BASE_ADDRESS + 0x00))
#define GPIOC_OTYPER                *((u32*)(GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_OSPEEDR               *((u32*)(GPIOC_BASE_ADDRESS + 0x08))
#define GPIOC_PUPDR                 *((u32*)(GPIOC_BASE_ADDRESS + 0x0C))
#define GPIOC_IDR                   *((u32*)(GPIOC_BASE_ADDRESS + 0x10))
#define GPIOC_ODR                   *((u32*)(GPIOC_BASE_ADDRESS + 0x14))
#define GPIOC_BSRR                  *((u32*)(GPIOC_BASE_ADDRESS + 0x18))
#define GPIOC_LCKR                  *((u32*)(GPIOC_BASE_ADDRESS + 0x1C))
#define GPIOC_AFRL                  *((u32*)(GPIOC_BASE_ADDRESS + 0x20))
#define GPIOC_AFRH                  *((u32*)(GPIOC_BASE_ADDRESS + 0x24))

///////////////////////////PORTD///////////////////////////////////
#define GPIOD_BASE_ADDRESS                 ((u32)(0x40020C00))

#define GPIOD_MODER                 *((u32*)(GPIOD_BASE_ADDRESS + 0x00))
#define GPIOD_OTYPER                *((u32*)(GPIOD_BASE_ADDRESS + 0x04))
#define GPIOD_OSPEEDR               *((u32*)(GPIOD_BASE_ADDRESS + 0x08))
#define GPIOD_PUPDR                 *((u32*)(GPIOD_BASE_ADDRESS + 0x0C))
#define GPIOD_IDR                   *((u32*)(GPIOD_BASE_ADDRESS + 0x10))
#define GPIOD_ODR                   *((u32*)(GPIOD_BASE_ADDRESS + 0x14))
#define GPIOD_BSRR                  *((u32*)(GPIOD_BASE_ADDRESS + 0x18))
#define GPIOD_LCKR                  *((u32*)(GPIOD_BASE_ADDRESS + 0x1C))
#define GPIOD_AFRL                  *((u32*)(GPIOD_BASE_ADDRESS + 0x20))
#define GPIOD_AFRH                  *((u32*)(GPIOD_BASE_ADDRESS + 0x24))

///////////////////////////PORTE///////////////////////////////////
#define GPIOE_BASE_ADDRESS                 ((u32)(0x40021000))

#define GPIOE_MODER                 *((u32*)(GPIOE_BASE_ADDRESS + 0x00))
#define GPIOE_OTYPER                *((u32*)(GPIOE_BASE_ADDRESS + 0x04))
#define GPIOE_OSPEEDR               *((u32*)(GPIOE_BASE_ADDRESS + 0x08))
#define GPIOE_PUPDR                 *((u32*)(GPIOE_BASE_ADDRESS + 0x0C))
#define GPIOE_IDR                   *((u32*)(GPIOE_BASE_ADDRESS + 0x10))
#define GPIOE_ODR                   *((u32*)(GPIOE_BASE_ADDRESS + 0x14))
#define GPIOE_BSRR                  *((u32*)(GPIOE_BASE_ADDRESS + 0x18))
#define GPIOE_LCKR                  *((u32*)(GPIOE_BASE_ADDRESS + 0x1C))
#define GPIOE_AFRL                  *((u32*)(GPIOE_BASE_ADDRESS + 0x20))
#define GPIOE_AFRH                  *((u32*)(GPIOE_BASE_ADDRESS + 0x24))


///////////////////////////PORTH///////////////////////////////////
#define GPIOH_BASE_ADDRESS                 ((u32)(0x40021C00))

#define GPIOH_MODER                 *((u32*)(GPIOH_BASE_ADDRESS + 0x00))
#define GPIOH_OTYPER                *((u32*)(GPIOH_BASE_ADDRESS + 0x04))
#define GPIOH_OSPEEDR               *((u32*)(GPIOH_BASE_ADDRESS + 0x08))
#define GPIOH_PUPDR                 *((u32*)(GPIOH_BASE_ADDRESS + 0x0C))
#define GPIOH_IDR                   *((u32*)(GPIOH_BASE_ADDRESS + 0x10))
#define GPIOH_ODR                   *((u32*)(GPIOH_BASE_ADDRESS + 0x14))
#define GPIOH_BSRR                  *((u32*)(GPIOH_BASE_ADDRESS + 0x18))
#define GPIOH_LCKR                  *((u32*)(GPIOH_BASE_ADDRESS + 0x1C))
#define GPIOH_AFRL                  *((u32*)(GPIOH_BASE_ADDRESS + 0x20))
#define GPIOH_AFRH                  *((u32*)(GPIOH_BASE_ADDRESS + 0x24))


#endif /* GPIO_PRIVATE_H_ */
