#ifndef _DRAW_BASE_H
#define _DRAW_BASE_H

#include "nrf_lcd.h"
void WriteOneDot(unsigned int color);//дһ���㣨����ɫ��
void BlockWrite(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend);//LCD��д�����������޸ģ��൱�ڲ�����






void DrawLine(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend, unsigned int color);
#define DrawBand(a,b,c,d,e) DrawLine((a),(b),(c),(d),(e))




#endif
