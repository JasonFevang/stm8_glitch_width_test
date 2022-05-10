/**
  ******************************************************************************
  * @file    Project/main.c 
  * @author  MCD Application Team
  * @version V2.3.0
  * @date    16-June-2017
  * @brief   Main program body
   ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */ 


/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"

/* Private defines -----------------------------------------------------------*/
#define GPIO_PORT GPIOC
#define GPIO_PIN GPIO_PIN_1

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

void main(void)
{
  uint16_t i = 1;
	// Turn a light output on for a moment on startup, used to detect when the device restarts
  GPIO_Init(GPIO_PORT, (GPIO_Pin_TypeDef)GPIO_PIN, GPIO_MODE_OUT_PP_LOW_FAST);
	while( i > 0){
		GPIO_WriteHigh(GPIO_PORT, GPIO_PIN);
		i++;
	}
	GPIO_WriteLow(GPIO_PORT, GPIO_PIN);
	//GPIOC->ODR |= (uint8_t)GPIO_PIN_1;
	//#asm
		//bset 0x500a, #1
	//#endasm


	// Assembly instruction:
	#asm
		ld A, #127
	loop:
		// Make the number of inc/dec pairs so massive that it's statistically crazy that skipping an instruction is really unlikely to skip the jump instruction
		// The additonal jump instructions are in case they get skipped, it'll loop back to the top
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		inc A
		dec A
		jrt loop
		jrt loop
		jrt loop
	#endasm
}

#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(u8* file, u32 line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
