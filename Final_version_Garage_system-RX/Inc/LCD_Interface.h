/*
 * LCD_Interface.h
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */
#include "STD_TYPES.h"
#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

typedef enum {
	LCD_enum_4BITS_MODE = 0 ,
	LCD_enum_8BITS_MODE
}lcd_mode;

void LCD_void_init(lcd_mode mode);
void LCD_voidWriteData(u8 copy_u8data);
void LCD_voidWriteCmd(u8 copy_u8data);

void LCD_void_write_string(u8* str);
void LCD_void_print_unsigned_integer(u32 number);
void LCD_void_goto(u8 raw , u8 col);


#endif /* LCD_INTERFACE_H_ */
