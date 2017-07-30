#ifndef __MENU_H_
#define __MENU_H_

#include "stm32f10x.h"
#include "sys.h"
#include "oled.h"

#define Func1 "Func1"
#define Func2 "Func2"
#define Func3 "Func3"
#define Func4 "Func4"

#define Func5 "Func5"
#define Func6 "Func6"
#define Func7 "Func7"
#define Func8 "Func8"

#define Func9 "Func9"
#define Func10 "Func10"
#define Func11 "Func11"
#define Func12 "Func12"

/*****************************
如需更多功能，在此添加
注意：需要同时添加页面
*****************************/
void Menu_Content(int Menu_Page);
void Menu_Display(int Menu_Page, int Level);
#endif
