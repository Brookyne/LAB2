/*
 * software_timer.h
 *
 *  Created on: Sep 26, 2024
 *      Author: USER
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include"main.h"
#include "stm32f1xx_hal.h"
extern int timer1_flag;
extern int timer2_flag;


void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();

void display7SEG(int num);
void update7SEG(int index);
void updateClockBuffer();

void displayMatrixLED(int num);

void resetMATRIX();

#endif /* INC_SOFTWARE_TIMER_H_ */
