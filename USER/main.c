//							STM32F103C8 + OLED12864 + SPI
//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  接5V或3.3v电源
//              D0   接PA5（SCL）
//              D1   接PA7（SDA）
//              RES  接PB0
//              DC   接PB1
//              CS   接PA4               
//              ----------------------------------------------------------------
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
#include "key.h"
#include "menu.h"

int Level=0,Menu_Page=1;
int sum=0;

int main(void)
{

	delay_init();
	KEY_Init();
	LED_Init();
	OLED_Init();
	Menu_Display(Menu_Page, Level);
	while (1)
	{
		KEY_Func(KEY_Scan());
	}
}




































// int main(void)
// {	u8 i;
//		delay_init();
//		NVIC_Configuration();
//		OLED_Init();
//		OLED_Clear(); 
//	while(1) 
//	{		
////		OLED_Clear();
//		OLED_ShowCHinese(0,0,0);
//		OLED_ShowCHinese(18,0,1);
//		OLED_ShowCHinese(36,0,2);
//		OLED_ShowCHinese(54,0,3);
//		OLED_ShowCHinese(72,0,4);
//		OLED_ShowCHinese(90,0,5);
//		OLED_ShowCHinese(108,0,6);
//		OLED_ShowCHinese(0,2,7);
//		OLED_ShowCHinese(18,2,8);
//		OLED_ShowCHinese(36,2,9);
//		OLED_ShowCHinese(54,2,10);
//		OLED_ShowCHinese(72,2,11);
//		OLED_ShowCHinese(90,2,12);
//		OLED_ShowCHinese(108,2,13);
//		OLED_ShowString(0,4,"Stay Simple,");
//		OLED_ShowString(40,6,"Stay Naive.");
//		for(i=1;i<60;i++)
//		{
//			OLED_ShowChar(0,6,'+');
//			OLED_ShowNum(8,6,i,2,16);
//			OLED_ShowChar(24,6,'s');
//			delay_ms(1000);
//		}

//	}	  
//}

