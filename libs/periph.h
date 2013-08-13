/*
 * periph.h
 *
 *  Created on: Apr 30, 2013
 *      Author: troshin
 */

#ifndef PERIPH_H_
#define PERIPH_H_

#include "pin_cfg.h"

//void Init_ADC(void);			// ADC[IN0] U_SENSE [PA0]

void Init_SPI2(void);			// ДУП АЗИМУТ
void Init_SPI3(void);			// ДУП УГОЛ МЕСТА
void Init_SPI4(void);			// ADS8320, AT45DB, ДУП УГОЛ Z

void Init_USART1(void);			// M & C
void Init_USART2(void);			// LCD & KBD
void Init_USART3(void);			// Приемник ПСН

void Init_UART5(void);			// Частотник АЗМ
void Init_UART7(void);			// Частотник УГМ
void Init_UART8(void);			// Частотник Z

void Init_TIM1(void);			// AZM_CNT_A [TIM1_CH1] & AZM_CNT_B [TIM1_CH2]
void Init_TIM3(void);			// UGM_CNT_A [TIM3_CH1] & UGM_CNT_B [TIM3_CH2]
void Init_TIM4(void);			// Z_CNT_A [TIM4_CH1] & Z_CNT_B [TIM4_CH2]

#endif /* PERIPH_H_ */
