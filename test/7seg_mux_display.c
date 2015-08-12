#include<reg51.h>
#include "delay.h"
#define data_seg P0
#define ss P2
unsigned char ch[]={0x60,0xDA,0XF2,0X66};
unsigned char ch2[]={0x01,0x02,0x04,0x08};
void main()
{
	unsigned int i;
	while(1)
	{
		for(i=0;i<=3;i++)
			{
				data_seg = ch[i];
				ss = ch2[i];
				delay_ms(1);
			}
	}

}
				   