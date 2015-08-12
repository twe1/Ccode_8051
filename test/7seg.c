#include<reg51.h>
#include "delay.h"
#define seven_seg P0

unsigned char ch[]={0xFC,0X60};
void main()
{
	unsigned int i;
	for(i=0;i<2;i++)
		{
			seven_seg=ch[i];
				delay_sec(1);
		}
}				   