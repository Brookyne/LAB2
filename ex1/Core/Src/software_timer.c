/*
 * software_timer.c
 *
 *  Created on: Sep 26, 2024
 *      Author: USER
 */

#include"software_timer.h"

int timer1_counter=0;
int timer1_flag=0;

void setTimer1(int duration){
	timer1_counter=duration;
	timer1_flag=0;
}
void timerRun(){
	if (timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag=1;
		}
	}
}
void display7SEG(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);

		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET); //6
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET); //0
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET); //1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET); //2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET); //3
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET); //4
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET); //5
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET); //6

		break;
	}
}

