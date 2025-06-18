/*
 * main.h
 *
 *  Created on: Jun 12, 2025
 *      Author: Omkar
 */

#ifndef MAIN_H_
#define MAIN_H_

#define MAX_TASKS        5

void task1_handler (void);
void task2_handler (void);
void task3_handler (void);
void task4_handler (void);

#define SIZE_TASK_STACK 		1024U
#define SIZE_SCHEDULAR_STACK 	1024U

#define SRAM_START               0x20000000U
#define SIZE_SRAM                ( (192) * (1024))
#define SRAM_END                 ((SRAM_START) + (SIZE_SRAM) )

#define T1_STACK_START           SRAM_END
#define T2_STACK_START           ( (SRAM_END) - (1 * SIZE_TASK_STACK) )
#define T3_STACK_START           ( (SRAM_END) - (2 * SIZE_TASK_STACK) )
#define T4_STACK_START           ( (SRAM_END) - (3 * SIZE_TASK_STACK) )
#define IDLE_STACK_START         ( (SRAM_END) - (4 * SIZE_TASK_STACK) )
#define SCHED_STACK_START        ( (SRAM_END) - (5 * SIZE_TASK_STACK) )


#define HSI_CLOCK         		16000000U
#define SYSTICK_TIM_CLK   		HSI_CLOCK


#define TASK_READY_STATE  0x00
#define TASK_BLOCKED_STATE  0XFF

#define DUMMY_XPSR 				 0x01000000U

#define TICK_HZ 				1000U



#endif /* MAIN_H_ */
