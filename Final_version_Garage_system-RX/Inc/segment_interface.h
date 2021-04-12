/*
 * segment.h
 *
 *  Created on: Mar 12, 2021
 *      Author: Nada
 */

#ifndef SEGMENT_INTERFACE_H_
#define SEGMENT_INTERFACE_H_

void SEVSEG_VoidInitialize(u8 seg_num);
void SEVSEG_VoidDisplay(u8 seg_num,u8 num_to_display);

void SEVSEG_VoidEnable(u8 seg_num);
void SEVSEG_VoidDisable(u8 seg_num);

#define SEG0     0
#define SEG1     1


#endif /* SEGMENT_INTERFACE_H_ */
