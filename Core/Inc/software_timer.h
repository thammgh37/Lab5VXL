/*
 * software_timer.h
 *
 *  Created on: Jul 11, 2023
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
void setTimer1(int duration);
extern int timer2_flag;
void setTimer2(int duration);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
