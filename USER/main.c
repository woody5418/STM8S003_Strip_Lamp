/*************** (C) COPYRIGHT  四维拓智 ***************************************
 * 文件名  ：main.c
 * 描述    ：工程模板    
 * 库版本  ：V1.1.0
 * 开发人员：Woody QQ：2490006131
 * 修改时间：2016-10-14
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "sysclock.h"
#include "delay.h"
#include "flash_eeprom.h"
#include "led.h"
#include "key.h"
#include "adc.h"

/*  Defines -----------------------------------------------------------*/
/*  Variate ---------------------------------------------------------*/
u16 ADC_Class = 0;
u8 flag_eeprom = 0;
u8 ADC_EEPROM;
u8 direction=0;


int main(void)
{    

  SystemClock_Init(); 
  delay_init(16);
  key_init();
  ADC_Init();
  LED_Init();
  Init_EEPROM();
  LED_Show();
  //enableInterrupts(); 	/* 开启总中断 */
  while (1)
  {
     //GPIO_WriteHigh(GPIOB, GPIO_PIN_5);
     
     if(flag_eeprom == 0)
     {
        flag_eeprom=1;
        direction=ReadEEPROM();  
        delay_ms(10);
     }  
    //49344  1024
     if(number == 1) 
     {
        number=0;
        switch(direction)
        {
           case 0:
           
             break;
           case 1:
             GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
             delay_ms(40);
             GPIO_WriteLow(GPIOC, GPIO_PIN_6);
             delay_ms(40);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
             delay_ms(40);
             GPIO_WriteLow(GPIOC, GPIO_PIN_6);
             delay_ms(40);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
             delay_ms(40);
             GPIO_WriteLow(GPIOC, GPIO_PIN_6);
             break;
           case 2:
             GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
             delay_ms(40);
             GPIO_WriteLow(GPIOC, GPIO_PIN_6);
             GPIO_WriteLow(GPIOC, GPIO_PIN_5);
             delay_ms(40);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
             delay_ms(40);
             GPIO_WriteLow(GPIOC, GPIO_PIN_6);
             GPIO_WriteLow(GPIOC, GPIO_PIN_5);
             delay_ms(40);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
             GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
             delay_ms(40);
             GPIO_WriteLow(GPIOC, GPIO_PIN_6);
             GPIO_WriteLow(GPIOC, GPIO_PIN_5);
             break;
           case 3:
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            delay_ms(40);
            break;
           case 4:
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_3);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            GPIO_WriteLow(GPIOC, GPIO_PIN_3);
            delay_ms(40);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_3);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            GPIO_WriteLow(GPIOC, GPIO_PIN_3);
            delay_ms(40);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_3);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            GPIO_WriteLow(GPIOC, GPIO_PIN_3);
            delay_ms(40);
            break;
           case 5:
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_3);
            GPIO_WriteHigh(GPIOB, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            GPIO_WriteLow(GPIOC, GPIO_PIN_3);
            GPIO_WriteLow(GPIOB, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_3);
            GPIO_WriteHigh(GPIOB, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            GPIO_WriteLow(GPIOC, GPIO_PIN_3);
            GPIO_WriteLow(GPIOB, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_6);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_5);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_4);
            GPIO_WriteHigh(GPIOC, GPIO_PIN_3);
            GPIO_WriteHigh(GPIOB, GPIO_PIN_4);
            delay_ms(40);
            GPIO_WriteLow(GPIOC, GPIO_PIN_6);
            GPIO_WriteLow(GPIOC, GPIO_PIN_5);
            GPIO_WriteLow(GPIOC, GPIO_PIN_4);
            GPIO_WriteLow(GPIOC, GPIO_PIN_3);
            GPIO_WriteLow(GPIOB, GPIO_PIN_4);
            delay_ms(40);
            break;
        }
     }    
    ADC_Class = ADC1_GetConversionValue();
    delay_ms(1);
    key_scan();
    if((ADC_Class <= 50)&&(ADC_Class >= 0))     ADC_EEPROM = 0;
    if((ADC_Class >= 50)&&(ADC_Class < 250))    ADC_EEPROM = 1;
    if((ADC_Class >= 250)&&(ADC_Class < 450))   ADC_EEPROM = 2;
    if((ADC_Class >= 450)&&(ADC_Class < 650))   ADC_EEPROM = 3;
    if((ADC_Class >= 650)&&(ADC_Class < 850))   ADC_EEPROM = 4;
    if((ADC_Class >= 850)&&(ADC_Class <= 1024))  ADC_EEPROM = 5;
    
    if(ADC_EEPROM > direction)  
       GPIO_WriteHigh(GPIOB, GPIO_PIN_5);
        else GPIO_WriteLow(GPIOB, GPIO_PIN_5);   
    switch(ADC_EEPROM)
    {
       case 0:
        ADC_Class=0;
        GPIO_WriteHigh(GPIOC, GPIO_PIN_6); // High
        GPIO_WriteHigh(GPIOC, GPIO_PIN_5); // High
        GPIO_WriteHigh(GPIOC, GPIO_PIN_4); // High
        GPIO_WriteHigh(GPIOC, GPIO_PIN_3); // High
        GPIO_WriteHigh(GPIOB, GPIO_PIN_4); // High
        break;
      case 1:
       ADC_Class=0;
        GPIO_WriteLow(GPIOC, GPIO_PIN_6);
        GPIO_WriteHigh(GPIOC, GPIO_PIN_5); // High
        GPIO_WriteHigh(GPIOC, GPIO_PIN_4); // High
        GPIO_WriteHigh(GPIOC, GPIO_PIN_3); // High
        GPIO_WriteHigh(GPIOB, GPIO_PIN_4); // High
        break;
      case 2:
       ADC_Class=0;
        GPIO_WriteLow(GPIOC, GPIO_PIN_6);
        GPIO_WriteLow(GPIOC, GPIO_PIN_5);
        GPIO_WriteHigh(GPIOC, GPIO_PIN_4); // High
        GPIO_WriteHigh(GPIOC, GPIO_PIN_3); // High
        GPIO_WriteHigh(GPIOB, GPIO_PIN_4); // High
        break;
      case 3:
       ADC_Class=0;
        GPIO_WriteLow(GPIOC, GPIO_PIN_6);
        GPIO_WriteLow(GPIOC, GPIO_PIN_5);
        GPIO_WriteLow(GPIOC, GPIO_PIN_4);
        GPIO_WriteHigh(GPIOC, GPIO_PIN_3); // High
        GPIO_WriteHigh(GPIOB, GPIO_PIN_4); // High
        break;
      case 4:
       ADC_Class=0;
        GPIO_WriteLow(GPIOC, GPIO_PIN_6);
        GPIO_WriteLow(GPIOC, GPIO_PIN_5);
        GPIO_WriteLow(GPIOC, GPIO_PIN_4);
        GPIO_WriteLow(GPIOC, GPIO_PIN_3);
        GPIO_WriteHigh(GPIOB, GPIO_PIN_4); // High
        break;
      case 5:
       ADC_Class=0;
        GPIO_WriteLow(GPIOC, GPIO_PIN_6);
        GPIO_WriteLow(GPIOC, GPIO_PIN_5);
        GPIO_WriteLow(GPIOC, GPIO_PIN_4);
        GPIO_WriteLow(GPIOC, GPIO_PIN_3);
        GPIO_WriteLow(GPIOB, GPIO_PIN_4);
        break;
    }
    
  }
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






