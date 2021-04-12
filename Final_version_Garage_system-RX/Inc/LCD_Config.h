/*
 * LCD_Config.h
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

#define LCD_RS_PIN  PIN1
#define LCD_E_PIN   PIN2

#define LCD_4BITS_PIN1    PIN3
#define LCD_4BITS_PIN2    PIN4
#define LCD_4BITS_PIN3    PIN5
#define LCD_4BITS_PIN4    PIN6


#define LCD_4BITS_PORT           	 PORT_B
//#define LCD_8BITS_DATA_PORT       PORTC_ID


#define LCD_8BITS_MODE 0
#define LCD_4BITS_MODE 1

#define LCD_CURRENT_MODE LCD_4BITS_MODE

#endif /* LCD_CONFIG_H_ */
