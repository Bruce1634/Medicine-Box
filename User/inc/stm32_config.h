#ifndef STM32_CONFIG_H
#define STM32_CONFIG_H

#include "stm32f10x.h"

void SysTick_Init(void);              //1 ms �жϳ�ʼ��
void RCC_Configuration(void);         //����PA��PB��PB��USART1��T1,T2,T3,T4
void GPIO_Configuration(void);        //PC0_PC12����ߵ�ƽ������PA0\1  PA2\3  PA6\7,PB6\7����ߵ�ƽ  //PB0\1\2\3ѡͨecho,���벻����̽ͷ��Echo
void NVIC_Configuration(void);        //�����ж����ȼ�
void USART_Configuration(void);       //���ô���
void Encoder_Configration(void);
void TIM8_PWM_Output(void);

#endif