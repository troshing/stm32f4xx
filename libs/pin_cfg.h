#ifndef _PIN_CFG_H
#define _PIN_CFG_H

#include "stm32f4xx_conf.h"

					/*	Невозвратные концевики	Input GPIO			*/

#define AZM_KWZ_1	GPIO_Pin_9			/* PC9	*/
#define AZM_KWZ_2	GPIO_Pin_8			/* PC8	*/

#define UGM_KWZ_1	GPIO_Pin_7			/* PC7	*/
#define UGM_KWZ_2	GPIO_Pin_6			/* PC6	*/

#define Z_KWZ_1		GPIO_Pin_15			/* PD15	*/
#define Z_KWZ_2		GPIO_Pin_14			/* PD14	*/

					/*	Возвратные концевики	Input GPIO			*/

#define AZM_KW_1	GPIO_Pin_11			/* PD11	*/
#define AZM_KW_2	GPIO_Pin_10			/* PD10	*/

#define UGM_KW_1	GPIO_Pin_9			/* PD9	*/
#define UGM_KW_2	GPIO_Pin_8			/* PD8	*/

#define Z_KW_1		GPIO_Pin_15			/* PB15	*/
#define Z_KW_2		GPIO_Pin_14			/* PB14	*/


					/*	Управление тормозами	Output GPIO			*/

#define VFD_CNTR		GPIO_Pin_7			/* PD7 */
#define UGM_TORMOZ		GPIO_Pin_6			/* PD6 */
#define Z_TORMOZ		GPIO_Pin_5			/* PD5 */


					/*	Выходы от энкодеров	AZM, UGM и Z Input GPIO	*/

#define AZM_CNT_A	GPIO_Pin_9			/* TIM1_CH1 PE9 */
#define AZM_CNT_B	GPIO_Pin_11			/* TIM1_CH2 PE11 */

#define UGM_CNT_A	GPIO_Pin_6			/* TIM3_CH1 PA6 */
#define UGM_CNT_B	GPIO_Pin_7			/* TIM3_CH2 PA7 */

#define Z_CNT_A		GPIO_Pin_12			/* TIM4_CH1 PD12 */
#define Z_CNT_B		GPIO_Pin_13			/* TIM4_CH2 PD13 */


					/*	Приемник ПСН  USART3	*/

#define	RX_PSN		GPIO_Pin_11			/* PB11 USART3_RX */
#define	TX_PSN		GPIO_Pin_10			/* PB10 USART3_TX */
#define RE_PSN		GPIO_Pin_12			/* PB12 RE_DE 	  */

					/*	Связь по М & С USART1	*/

#define RX_MC		GPIO_Pin_10			/* PA10 USART1_RX */
#define TX_MC		GPIO_Pin_9			/* PA9  USART1_TX */
#define RE_MC		GPIO_Pin_8			/* PA8  RE_DE     */


					/*	к плате LCD	USART2	*/

#define RX_LCD		GPIO_Pin_3			/* PA3 USART2_RX */
#define TX_LCD		GPIO_Pin_2			/* PA2 USART2_TX */


					/* кнопка STOP на отдельной плате */

#define KN_STOP		GPIO_Pin_8			/* PB8 KN_STOP    */

					/* кнопка AS на отдельной плате */

#define KN_AS		GPIO_Pin_3			/* PC3	KN_AS */

					/* Частотник АЗМ UART5   */

#define RX_AZM		GPIO_Pin_2			/* PD2 UART5_RX  */
#define TX_AZM		GPIO_Pin_12			/* PC12 UART5_TX */
#define RE_AZM		GPIO_Pin_1			/* PD1 RE_DE     */


					/* Частотник UGM UART7   */

#define RX_UGM		GPIO_Pin_7			/* PE7 UART7_RX  */
#define TX_UGM		GPIO_Pin_8			/* PE8 UART7_TX  */
#define RE_UGM		GPIO_Pin_4			/* PC4 RE_DE     */


					/* Частотник Z UART8   */

#define RX_Z		GPIO_Pin_0			/* PE0 UART8_RX  */
#define TX_Z		GPIO_Pin_1			/* PE1 UART8_TX  */
#define RE_Z		GPIO_Pin_9			/* PB9 RE_DE     */


					/* Flash AT45 SPI4*/

#define SPI4_SCK	GPIO_Pin_2			/* PE2 SPI_SCK  */
#define SPI4_MISO	GPIO_Pin_5			/* PE5 SPI_MISO */
#define SPI4_MOSI	GPIO_Pin_6			/* PE6 SPI_MOSI */

//#define CS_ANALOG	GPIO_Pin_4			/* PE4 CS_ADS8320 */
#define CS_AT45		GPIO_Pin_0			/* PC0 CS_AT45    */
#define RES_AT45	GPIO_Pin_1			/* PC1 RESET_AT45 */


					/* LED's GPIO Output */

#define LED_UP		GPIO_Pin_0			/* PD0 LED_UP    */
#define LED_DOWN	GPIO_Pin_3			/* PD3 LED_DOWN  */
#define LED_LEFT	GPIO_Pin_4			/* PD4 LED_LEFT  */
#define LED_RIGHT	GPIO_Pin_0			/* PB0 LED_RIGHT */

#define LED_ZPLUS	GPIO_Pin_15			/* PE15 Z_PLUS   */
#define LED_ZMINUS	GPIO_Pin_14			/* PE14 Z_MINUS  */
#define LED_STOP	GPIO_Pin_1			/* PB1  LED_STOP */
#define LED_HAND	GPIO_Pin_13			/* PE13 LED_HAND */
#define LED_AS		GPIO_Pin_12			/* PE12 LED_AS   */
#define LED_SPOINT	GPIO_Pin_10			/* PE10 LED_SPOINT */
#define LED_MC		GPIO_Pin_5			/* PB5  LED_MC   */
#define LED_ALARM	GPIO_Pin_6			/* PB6  LED_ALARM */
#define LED_AVARIA	GPIO_Pin_7			/* PB7  LED_AVARIA */


//#define USB_DP		GPIO_Pin_12			/* PA12 USB_DP */
//#define USB_DM		GPIO_Pin_11			/* PA11 USB_DM */


//#define U_SENSE		GPIO_Pin_0			/* PA0 SensorU -> ADC1 [IN0] */


					/* SPI2 ДУП АЗИМУТ */

#define SCK_AZM		GPIO_Pin_13			/* PB13 SPI2  SCK_SSI_AZM */
#define MISO_AZM	GPIO_Pin_2			/* PC2 SPI2  MISO_SSI_AZM */


					/* SPI3 ДУП УГОЛ МЕСТА */

#define SCK_UGM		GPIO_Pin_10			/* PC10	 SPI3 SCK_SSI_UGM */
#define MISO_UGM	GPIO_Pin_11			/* PC11	 SPI3 MISO_SSI_UGM */

					/* CSD_SSI_Z ДУП УГОЛ Z */

#define CS_Z		GPIO_Pin_3			/* PE3 CSD_SSI_Z */


//------------------------------------------------------  Function  Definition --------------------------------------------------------------------------------

void pin_config(void);


//-------------------------------------------------------------------------------------------------------------------------------------------------------------
#endif

