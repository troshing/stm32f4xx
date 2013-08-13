/*
 * pin_cfg.c
 *
 *  Created on: Apr 29, 2013
 *      Author: troshin
 */
#include "pin_cfg.h"


void pin_config(void)
{
	GPIO_InitTypeDef	GPIO_struct;

									/*	Clocking GPIO ports to ENABLE */

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA | RCC_AHB1Periph_GPIOC | RCC_AHB1Periph_GPIOB | RCC_AHB1Periph_GPIOE | RCC_AHB1Periph_GPIOD, ENABLE);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** SPI2 GPIO Configuration
			MISO_AZM [PC2]	 ------> SPI2_MISO
			SCK_AZM  [PB13]	 ------> SPI2_SCK
		*/
	GPIO_struct.GPIO_Pin =  MISO_AZM;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_struct);

	GPIO_struct.GPIO_Pin = SCK_AZM;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_struct);


	/*Configure GPIO pin alternate function */
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource2, GPIO_AF_SPI2);

		/*Configure GPIO pin alternate function */
	GPIO_PinAFConfig(GPIOB, GPIO_PinSource13, GPIO_AF_SPI2);
//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** SPI3 GPIO Configuration
			SCK_UGM  [PC10]	 ------> SPI3_SCK
			MISO_UGM [PC11]	 ------> SPI3_MISO
		*/

	GPIO_struct.GPIO_Pin = SCK_UGM;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_struct);

	GPIO_struct.GPIO_Pin =  MISO_UGM;
	GPIO_Init(GPIOC, &GPIO_struct);

	/*Configure GPIO pin alternate function */
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource11, GPIO_AF_SPI3);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource10, GPIO_AF_SPI3);

//-------------------------------------------------------------------------------------------------------------------------------------------------------
	/** TIM1 GPIO Configuration
			AZM_CNT_A [PE9]	 ------> TIM1_CH1
			AZM_CNT_B [PE11] ------> TIM1_CH2
		*/

	GPIO_struct.GPIO_Pin = AZM_CNT_A | AZM_CNT_B;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_2MHz;
	GPIO_Init(GPIOE, &GPIO_struct);

	GPIO_PinAFConfig(GPIOE, GPIO_PinSource9 | GPIO_PinSource11, GPIO_AF_TIM1);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** TIM3 GPIO Configuration
			UGM_CNT_A [PA6]	 ------> TIM3_CH1
			UGM_CNT_B [PA7]	 ------> TIM3_CH2
		*/

	GPIO_struct.GPIO_Pin = UGM_CNT_A | UGM_CNT_B;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_struct);

	GPIO_PinAFConfig(GPIOA, GPIO_PinSource6 | GPIO_PinSource7, GPIO_AF_TIM3);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** TIM4 GPIO Configuration
			Z_CNT_A PD12	 ------> TIM4_CH1
			Z_CNT_B PD13	 ------> TIM4_CH2
		*/

	GPIO_struct.GPIO_Pin = Z_CNT_A | Z_CNT_B;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_struct);

	GPIO_PinAFConfig(GPIOD, GPIO_PinSource12 | GPIO_PinSource13, GPIO_AF_TIM4);


//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** USART1 GPIO Configuration
			TX_MC [PA9]	 ------> USART1_TX
			RX_MC [PA10] ------> USART1_RX
		*/

	GPIO_struct.GPIO_Pin = RX_MC | TX_MC;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_struct);

	GPIO_PinAFConfig(GPIOA, GPIO_PinSource10 | GPIO_PinSource9, GPIO_AF_USART1);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** USART2 GPIO Configuration
			TX_LCD [PA2]	 ------> USART2_TX
			RX_LCD [PA3]	 ------> USART2_RX
		*/

	GPIO_struct.GPIO_Pin = RX_LCD | TX_LCD;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_struct);

	GPIO_PinAFConfig(GPIOA, GPIO_PinSource2 | GPIO_PinSource3, GPIO_AF_USART2);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** USART3 GPIO Configuration
			TX_PSN [PB10]	 ------> USART3_TX
			RX_PSN [PB11]	 ------> USART3_RX
		*/

	GPIO_struct.GPIO_Pin = RX_PSN | TX_PSN;
	GPIO_struct.GPIO_Mode = GPIO_Mode_AF;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_struct);

	GPIO_PinAFConfig(GPIOB, GPIO_PinSource10 | GPIO_PinSource11 , GPIO_AF_USART3);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

	/** Configure pins as GPIO
			KN_AS 	   [PC3]	------> GPIO_Input
			UGM_KWZ_2  [PC6]	------> GPIO_Input
			UGM_KWZ_1  [PC7]	------> GPIO_Input
			AZM_KWZ_2  [PC8]	------> GPIO_Input
			AZM_KWZ_1  [PC9]	------> GPIO_Input

			KN_STOP    [PB8]	----->  GPIO_Input
			Z_KW_2     [PB14]	------> GPIO_Input
			Z_KW_1     [PB15]	------> GPIO_Input

			UGM_KW_2   [PD8]	------> GPIO_Input
			UGM_KW_1   [PD9]	------> GPIO_Input
			AZM_KW_2   [PD10]	------> GPIO_Input
			AZM_KW_1   [PD11]	------> GPIO_Input
			Z_KWZ_2    [PD14]	------> GPIO_Input
			Z_KWZ_1    [PD15]	------> GPIO_Input

			RE_MC 	   [PA8]	------> GPIO_Output

			LED_RIGHT  [PB0]	------> GPIO_Output
			LED_STOP   [PB1]	------> GPIO_Output
			LED_MC     [PB5]	------> GPIO_Output
			LED_ALARM  [PB6]	------> GPIO_Output
			LED_AVARIA [PB7]	------> GPIO_Output
			RE_Z 	   [PB9]	------> GPIO_Output
			RE_PSN	   [PB12]	------> GPIO_Output

			CS_AT45    [PC0]	------> GPIO_Output
			RES_AT45   [PC1] 	------> GPIO_Output
			RE_UGM     [PC4]	------> GPIO_Output

			LED_UP 	   [PD0]	------> GPIO_Output
			RE_AZM 	   [PD1]	------> GPIO_Output
			LED_DOWN   [PD3] 	------> GPIO_Output
			LED_LEFT   [PD4]	------> GPIO_Output
			Z_TORMOZ   [PD5]	------> GPIO_Output
			UGM_TORMOZ [PD6]	------> GPIO_Output
			AZM_TORMOZ [PD7]	------> GPIO_Output

			CS_Z 	   [PE3]	------> GPIO_Output
			CS_ANALOG  [PE4]	------> GPIO_Output
			LED_SPOINT [PE10]	------> GPIO_Output
			LED_AS 	   [PE12]	------> GPIO_Output
			LED_HAND   [PE13]	------> GPIO_Output
			LED_ZMINUS [PE14]	------> GPIO_Output
			LED_ZPLUS  [PE15]	------> GPIO_Output

		*/
	GPIO_struct.GPIO_Pin = KN_STOP|Z_KW_2|Z_KW_1;
	GPIO_struct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_DOWN;		// или подт€гивать к '+V'  GPIO_PuPd_UP	?
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_struct);

	GPIO_struct.GPIO_Pin = KN_AS|UGM_KWZ_2|UGM_KWZ_1|AZM_KWZ_2|AZM_KWZ_1;
	GPIO_struct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOC, &GPIO_struct);

	GPIO_struct.GPIO_Pin = UGM_KW_2|UGM_KW_1|AZM_KW_2|AZM_KW_1|Z_KWZ_2|Z_KWZ_1;
	GPIO_struct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOD, &GPIO_struct);

	GPIO_struct.GPIO_Pin = RE_MC;
	GPIO_struct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_struct);

	GPIO_struct.GPIO_Pin = LED_RIGHT|LED_STOP|RE_PSN|LED_MC|LED_ALARM|LED_AVARIA|RE_Z;
	GPIO_struct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_struct);

	GPIO_struct.GPIO_Pin = CS_AT45|RES_AT45|RE_UGM;
	GPIO_struct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_struct);

	GPIO_struct.GPIO_Pin = LED_UP|RE_AZM|LED_DOWN|LED_LEFT|Z_TORMOZ|UGM_TORMOZ|VFD_CNTR;
	GPIO_struct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOD, &GPIO_struct);

	GPIO_struct.GPIO_Pin = CS_Z|LED_SPOINT|LED_AS|LED_HAND|LED_ZMINUS|LED_ZPLUS;
	GPIO_struct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_struct.GPIO_OType = GPIO_OType_PP;
	GPIO_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_struct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOE, &GPIO_struct);

}


