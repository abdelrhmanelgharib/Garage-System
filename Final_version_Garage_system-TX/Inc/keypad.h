/*
 * keypad.h
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_



/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* Keypad configurations for number of rows and columns */
#define N_col 4
#define N_row 4

/* Keypad Port Configurations */
#define KEYPAD_PORT_OUT
//#define KEYPAD_PORT_IN  PINA
//#define KEYPAD_PORT_DIR DDRA

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Function responsible for getting the pressed keypad key
 */

void  KeyPad_Intialize(void);
u8 KeyPad_getPressedKey(void);
u8 check_KeyPad_getPressedKey(void);



#endif /* KEYPAD_H_ */
