#include "stm32f4xx.h"
#include "stm32f4xx_it.h"
#include "pin_cfg.h"
#include "periph.h"


int main(void)
{
	pin_config();

	Init_SPI2();					// ДУП СКАНЕР
	Init_SPI3();					// ДУП Поляризац
	Init_SPI4();					// Флэш память

	Init_USART1();					// Обмен по M & C
	Init_USART2();					// Обмен с платой LCD & KBD
	Init_USART3();					// Обмен по ПСНКС

	//Init_TIM1();
	//Init_TIM3();
	//Init_TIM4();

    while(1)
    {

    }
}
