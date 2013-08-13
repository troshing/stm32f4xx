#include "stm32f4xx.h"
#include "stm32f4xx_it.h"
#include "pin_cfg.h"
#include "periph.h"


int main(void)
{
	pin_config();

	Init_SPI2();					// ��� ������
	Init_SPI3();					// ��� ���������
	Init_SPI4();					// ���� ������

	Init_USART1();					// ����� �� M & C
	Init_USART2();					// ����� � ������ LCD & KBD
	Init_USART3();					// ����� �� �����

	//Init_TIM1();
	//Init_TIM3();
	//Init_TIM4();

    while(1)
    {

    }
}
