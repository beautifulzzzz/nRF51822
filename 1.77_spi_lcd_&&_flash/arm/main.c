#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "boards.h"
#include "nrf_lcd.h"
#include "flash.h"
#include "draw_base.h"
#include "draw_picture.h"
#include "draw_text.h"
#include "pic.h"

extern unsigned  int pic_eval[];
extern unsigned char gImage_A[];
extern unsigned char gImage_B[];
extern unsigned char gImage_C[];

#if defined(FLASH_TEST)
extern uint8_t FLASH_Buf[10];
#endif
/*
ָ��ṹ��
*/
struct DIS{
	unsigned int cen_x,cen_y;//Բ��λ��
	unsigned int len;//ָ�볤��
	unsigned int dir;//Ϊ��ͷ����0,1,2,3->��������
	unsigned int pre_dir;//��¼�ϴλ���λ��
	bool dir_change;//��ͷ�����Ƿ�ı�,1�ı䣬0û��	
}myDis;
void drawDIS(bool isPre){//���Ʒ���ָ��ĺ���
	if(myDis.dir_change==1){
	//	dir_change=0;
		switch(isPre==0 ? myDis.dir:myDis.pre_dir){
		case 0:	
			DrawLine(myDis.cen_x,myDis.cen_x,myDis.cen_y-myDis.len,myDis.cen_y,isPre==0 ? GREEN : RED);
			break;
		case 1:
			DrawLine(myDis.cen_x,myDis.cen_x,myDis.cen_y,myDis.cen_y+myDis.len,isPre==0 ? GREEN : RED);
			break;
		case 2:
			DrawLine(myDis.cen_x-myDis.len,myDis.cen_x,myDis.cen_y,myDis.cen_y,isPre==0 ? GREEN : RED);
			break;
		case 3:
			DrawLine(myDis.cen_x,myDis.cen_x+myDis.len,myDis.cen_y,myDis.cen_y,isPre==0 ? GREEN : RED);
			break;
		default:break;
		}
		if(isPre==0)DrawLine(myDis.cen_x-2,myDis.cen_x+2,myDis.cen_y-2,myDis.cen_y+2,BLACK);
		else drawDIS(0);
	}
}

/**
 * main() function
 * @return 0. int return type required by ANSI/ISO standard.
 */
int main(void)
{
	unsigned int x,y,cnt;
	int dis;//�����־��1Ϊ�����ߣ�-1Ϊ������

	myDis.cen_x=COL/2;
	myDis.cen_y=ROW-50;
	myDis.dir=0;
	myDis.pre_dir=0;
	myDis.len=20;
	myDis.dir_change=1;


	GPIO_Init();
	LCD_Init();
	Spi_Flash_Init();
	DispColor(RED);
//	Spi_Flash_test();
	x=y=cnt=0;
	dis=1;
//	SPIFlash_Erase_Block(0);
//	SPIFlash_Erase_Block(1);
//	SPIFlash_Erase_Block(2);
//	nrf_delay_ms(100);
	SpiFlash_Write_MorePage(gImage_A, 0, 40960);
	SpiFlash_Write_MorePage(gImage_B, 1<<16, 40960);
	SpiFlash_Write_MorePage(gImage_C, 2*(1<<16), 40960);
//	DispPic(pic_eval);
	DispPicFromSD(0);
	DispPicFromSD(1);
	DispPicFromSD(2);
   	while(1<2)
	{
//		cnt++;
//		myDis.pre_dir=myDis.dir;
//		myDis.dir=cnt%4;
//		DispInt(cnt,COL/2-FONT_W*2,ROW,BLUE,RED);
//		FLASH_Buf[3]=0;
//		DispStr(FLASH_Buf,x,y,BLACK,RED); 
//		drawDIS(1);
//
//		x+=dis*1;
//		y+=dis*2;
//		if(x>=COL-FONT_W*6)
//		{
//			dis=-1;	
//		}
//		if(x<=0)
//		{
//		 	dis=1;
//		}  
//		nrf_delay_ms(100);
	}
}
