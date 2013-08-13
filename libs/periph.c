/*
 * periph.c
 *
 *  Created on: Apr 30, 2013
 *      Author: troshin
 */

#include "periph.h"


void Init_SPI2(void)
{
	SPI_InitTypeDef SPI_struct;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI2, ENABLE);

	//SPI_struct.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_struct.SPI_Mode = SPI_Mode_Master;
	SPI_struct.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_struct.SPI_CPOL = SPI_CPOL_Low;
	SPI_struct.SPI_DataSize = SPI_DataSize_8b;
	SPI_struct.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_struct.SPI_NSS = SPI_NSS_Soft;
	SPI_Init(SPI2,&SPI_struct);

	SPI_Cmd(SPI2,ENABLE);

}

void Init_SPI3(void)
{
	SPI_InitTypeDef SPI_struct;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_SPI3, ENABLE);

	//SPI_struct.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_struct.SPI_Mode = SPI_Mode_Master;
	SPI_struct.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_struct.SPI_CPOL = SPI_CPOL_Low;
	SPI_struct.SPI_DataSize = SPI_DataSize_8b;
	SPI_struct.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_struct.SPI_NSS = SPI_NSS_Soft;
	SPI_Init(SPI3,&SPI_struct);

	SPI_Cmd(SPI3,ENABLE);
}

void Init_SPI4(void)
{
	SPI_InitTypeDef SPI_struct;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI4, ENABLE);

	SPI_struct.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_struct.SPI_Mode = SPI_Mode_Master;
	SPI_struct.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_struct.SPI_CPOL = SPI_CPOL_Low;
	SPI_struct.SPI_DataSize = SPI_DataSize_8b;
	SPI_struct.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_struct.SPI_NSS = SPI_NSS_Soft;
	SPI_Init(SPI4,&SPI_struct);

	SPI_Cmd(SPI4,ENABLE);
}

void Init_USART1(void)
{
	USART_InitTypeDef USART_struct;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);

	USART_struct.USART_BaudRate = 115200;
	USART_struct.USART_StopBits	= USART_StopBits_1;
	USART_struct.USART_Parity = USART_Parity_No;
	USART_struct.USART_WordLength = USART_WordLength_8b;
	USART_struct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_struct.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_Init(USART1,&USART_struct);

	USART_Cmd(USART1,ENABLE);
}

void Init_USART2(void)
{
	USART_InitTypeDef USART_struct;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);

	USART_struct.USART_BaudRate = 115200;
	USART_struct.USART_StopBits	= USART_StopBits_1;
	USART_struct.USART_Parity = USART_Parity_No;
	USART_struct.USART_WordLength = USART_WordLength_8b;
	USART_struct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_struct.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_Init(USART2,&USART_struct);

	USART_Cmd(USART2,ENABLE);
}

void Init_USART3(void)
{
	USART_InitTypeDef USART_struct;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

	USART_struct.USART_BaudRate = 115200;
	USART_struct.USART_StopBits	= USART_StopBits_1;
	USART_struct.USART_Parity = USART_Parity_No;
	USART_struct.USART_WordLength = USART_WordLength_8b;
	USART_struct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_struct.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_Init(USART3,&USART_struct);

	USART_Cmd(USART3,ENABLE);
}


void Init_TIM1(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1,ENABLE);

	//TIM_EncoderInterfaceConfig()

	TIM_Cmd(TIM1,ENABLE);
}

void Init_TIM3(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);

	//

	TIM_Cmd(TIM3,ENABLE);
}

void Init_TIM4(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4,ENABLE);

	//

	TIM_Cmd(TIM4,ENABLE);
}

