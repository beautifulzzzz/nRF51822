#ifndef _DRAW_PICTURE_H
#define _DRAW_PICTURE_H


#define EVAL_PIC

#include "nrf_lcd.h"
void WriteOneDot(unsigned int color);//дһ���㣨����ɫ��
void BlockWrite(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend);//LCD��д�����������޸ģ��൱�ڲ�����
void WriteDispData(unsigned char DataH, unsigned char DataL);//д��ʾ��������Ļ����Ļ��ʾ������Ҫ2�ֽڣ�


#define PIC_WIDTH    160	 //Ԥ����LCD��ʾ��������ͼƬ�Ĵ�С
#define PIC_HEIGHT   160






#endif

