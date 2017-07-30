#include "menu.h"
#include "stm32f10x.h"


void Menu_Content(int Menu_Page)
{
	switch (Menu_Page)
	{
		case 1:
		{
			OLED_ShowString(0,0,Func1);
			OLED_ShowString(0,2,Func2);
			OLED_ShowString(0,4,Func3);
			OLED_ShowString(0,6,Func4);
			break;
		}
		case 2:
		{
			OLED_ShowString(0,0,Func5);
			OLED_ShowString(0,2,Func6);
			OLED_ShowString(0,4,Func7);
			OLED_ShowString(0,6,Func8);
			break;
		}
		case 3:
		{
			OLED_ShowString(0,0,Func9);
			OLED_ShowString(0,2,Func10);
			OLED_ShowString(0,4,Func11);
			OLED_ShowString(0,6,Func12);
			break;
		}
		/***********************************
		添加完功能和页面后，在此添加case以显示
		***********************************/
		default: break;
	}
}


void Menu_Display(int Menu_Page, int Level)
{
	OLED_Clear();
	Menu_Content(Menu_Page);
	OLED_ShowChar(120,Level,'*');
}
