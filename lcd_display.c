#include<reg51.h>
#include "delay.h"
#include "lcd.h"
#define seg_data P2
sbit S1=P1^6;
sbit S2=P1^7;


unsigned char lcd_tab[]="hello world";
unsigned char seg_tab1[]={0x66,0x66,0x66,0x66,0x66,0XDA,0XB6,0x66,0XB6,0x66,0x66};
unsigned char seg_tab2[]={0xFE,0XB6,0X9C,0X9C,0X8D,0XFC,0XE0,0X8D,0XDA,0X9C,0X66};
void main()
{   
	int i;
	lcd_init();
	for(i=0;i<lcd_tab[i]!='\0';i++)
	{
	lcd_data(lcd_tab[i]);
	S1=1;
	S2=0;
	seg_data=seg_tab1[i];
	//delay_ms(10);
	S1=0;
	S2=1;
	seg_data=seg_tab2[i];
	delay_sec(1);
	lcd_cmd(0x02);

	}

    while(1);
}





		

