#ifndef _DRAW_TEXT_H
#define _DRAW_TEXT_H

#include "font.h"
#include "nrf_lcd.h"
void WriteOneDot(unsigned int color);//дһ���㣨����ɫ��
void BlockWrite(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend);//LCD��д�����������޸ģ��൱�ڲ�����



void DispOneChar(unsigned char ord, unsigned int Xstart, unsigned int Ystart, unsigned int TextColor, unsigned int BackColor);// ord:0~95
void DispStr(unsigned char *str, unsigned int Xstart, unsigned int Ystart, unsigned int TextColor, unsigned int BackColor);//��ʾһ���ַ�������
void DispInt(unsigned int i, unsigned int Xstart, unsigned int Ystart, unsigned int TextColor, unsigned int BackColor);//��ʾһ��number



#endif
