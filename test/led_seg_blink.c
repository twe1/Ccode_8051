#include<reg51.h>
#include "delay.h"
#define led_seg P0
sbit bzr = P2^7;
void main()
{
 	unsigned int n=1;
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
		n++;
	}
}
