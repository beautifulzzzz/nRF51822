#ifndef _NRF_LCD_H
#define _NRF_LCD_H


#include "pca10001.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "font.h"

/*
���Ÿߵ͵�ƽ�궨��
*/
#define CS_SET		nrf_gpio_pin_set(CS)
#define CS_CLEAR 	nrf_gpio_pin_clear(CS)  
#define RS_SET		nrf_gpio_pin_set(RS)
#define RS_CLEAR 	nrf_gpio_pin_clear(RS) 
#define RET_SET		nrf_gpio_pin_set(RET)
#define RET_CLEAR 	nrf_gpio_pin_clear(RET)
#define SCL_SET		nrf_gpio_pin_set(SCL)
#define SCL_CLEAR 	nrf_gpio_pin_clear(SCL)   
#define SDA_SET		nrf_gpio_pin_set(SDA)
#define SDA_CLEAR 	nrf_gpio_pin_clear(SDA)
/*
�궨��ȴ�����
*/
#define DELAY_MS(n) nrf_delay_ms(n)



//------------------------------------------------------


#define ROW  160		    //��ʾ���С�����
#define COL  128


#define BLUE   0xF800		 //������ɫ���� 
#define GREEN  0x07E0
#define RED    0x001F
#define WHITE  0xFFFF
#define BLACK  0x0000
#define GRAY   0xEF5D	     //0x2410
#define GRAY75 0x39E7 
#define GRAY50 0x7BEF	
#define GRAY25 0xADB5


void GPIO_Init(void);//SPI��GPIO��ʼ��
void LCD_Init(void);//LCD��ʼ��
void WriteDispData(unsigned char DataH, unsigned char DataL);//д��ʾ��������Ļ����Ļ��ʾ������Ҫ2�ֽڣ�
void BlockWrite(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend);//LCD��д�����������޸ģ��൱�ڲ�������仰֮�����SPI����Ļд���ݾʹӶ�Ӧ�ľ�������ʼ��䣩
void DispColor(unsigned int color);//LCD��ʾ��ɫ����ɫ����.h�ļ��ж��壩
void WriteOneDot(unsigned int color);//дһ���㣨����ɫ��
void PutPixel(unsigned int x, unsigned int y, unsigned int color);//����һ�����ص�

#endif
