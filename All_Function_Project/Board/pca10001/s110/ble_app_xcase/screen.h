#ifndef _SCREEN_H
#define _SCREEN_H


#include "boards.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "font.h"
#include "nrf_pwm.h"
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

#define LCD_Enable_POWER   nrf_gpio_pin_set(LCD_POWER_EN)
#define LCD_Disable_POWER  nrf_gpio_pin_clear(LCD_POWER_EN)
#define LCD_BCKLIGHT_Enable_POWER  	nrf_pwm_set_enabled(true)
#define LCD_BCKLIGHT_Disable_POWER  nrf_pwm_set_enabled(false)
/*
�궨��ȴ�����
*/
#define DELAY_MS(n) nrf_delay_ms(n)



//------------------------------------------------------
#if defined(LCD_177)
#define PIC_WIDTH    160	 //Ԥ����LCD��ʾ��������ͼƬ�Ĵ�С
#define PIC_HEIGHT   160


#define ROW  160		    //��ʾ���С�����
#define COL  128
#elif defined(LCD_154)
#define PIC_WIDTH    240	 //Ԥ����LCD��ʾ��������ͼƬ�Ĵ�С
#define PIC_HEIGHT   240


#define ROW  240		    //��ʾ���С�����
#define COL  240
#endif

#define RED    0xF800		 //������ɫ���� 
#define GREEN  0x07E0
#define BLUE   0x001F
#define WHITE  0xFFFF
#define BLACK  0x0000
#define GRAY   0xEF5D	     //0x2410
#define GRAY75 0x39E7 
#define GRAY50 0x7BEF	
#define GRAY25 0xADB5


void GPIO_Init(void);
void LCD_Init(void);//����GPIO��
void DispColor(unsigned int color);
void DrawRectangle(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend, unsigned int color);

#endif
