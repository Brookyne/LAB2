/*
 * software_timer.h
 *
 *  Created on: Sep 26, 2024
 *      Author: USER
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include"main.h"
extern int timer1_flag;

void setTimer1(int duration);
void timerRun();
void display7SEG(int num);

#endif /* INC_SOFTWARE_TIMER_H_ */
