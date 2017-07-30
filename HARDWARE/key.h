#ifndef __KEY_H
#define __KEY_H
#include "sys.h"
void KEY_Init(void);
void LED_Init(void);
int KEY_Scan(void);
void LED_Reverse(void);
void KEY_Func(int KEY);
#define LED 	PCout(13)
#define KEY1 	PBin(12)
#define KEY2	PBin(13)
#define KEY3	PBin(14)
#define KEY4	PBin(15)

#define MAX_LEVEL 6
#define MAX_PAGE  3
#endif
