#include<reg51.h>
#include "delay.h"
#define led_seg P2
#define sev_seg P0
sbit bzr = P1^7;

unsigned char ch[]={0X60,0XDA,0XF2,0X66,0XB6};

void main()
{
 	unsigned int n=0;
	while(1)
	{
		if(n==5)
		{
			led_seg=0xFF;
			n=0;
			bzr=1;
		}
		else
		{
			led_seg=0x0F;
			bzr=0;
		}
	
		delay_sec(1);
		led_seg=0x00;
		delay_sec(1);
		sev_seg=ch[n];
		n++;			
			
	}

}