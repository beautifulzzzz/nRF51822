#include "draw_base.h"




////////////////////////////////////////////////////////////////////////////////////
//���ƻ�����ͼ�ε�Ⱥ���
////////////////////////////////////////////////////////////////////////////////////
/*
����һƬ��������Ϊ�ߣ���ʵ����ˢһ���棩
*/
void DrawLine(unsigned int Xstart, unsigned int Xend, unsigned int Ystart, unsigned int Yend, unsigned int color)
{
    unsigned int i, j;

    BlockWrite(Xstart, Xend, Ystart, Yend);

    for(i = Ystart; i < Yend + 1; i++)
    {
        for(j = Xstart; j < Xend + 1; j++)
        {
            WriteOneDot(color);
        }
    }
}
