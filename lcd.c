#include<reg51.h>
#include "delay.h"
#define lcd_dp P0 

sbit RS=P2^0;
sbit RW=P2^1;
sbit E=P2^2;

void lcd_cmd(unsigned int x)
{
	RS=0;
	RW=0;
	E=1;
	lcd_dp=x;
	delay_ms(250);
	E=0;
}

void lcd_data(unsigned char y)
{
	RS=1;
	RW=0;
	E=1;
	lcd_dp=y;
	delay_ms(250);
	E=0;
}

void lcd_string(unsigned char ch[100])
{
	unsigned int i;
	for(i=0;ch[i]!='\0';i++)
		lcd_data(ch[i]);
}

void lcd_init()
{
	lcd_cmd(0x01);
	lcd_cmd(0x02);
	lcd_cmd(0x0C);

}

		

