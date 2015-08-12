#include<reg51.h>
sbit l1=P0^0;
void sec(unsigned int x);
void msec(unsigned int x);
void main()
{
	l1=0;
	sec(100);
	l1=1;
	sec(100);
}
void sec(unsigned int x)
{
	while(x!=0)
	{
	x--;
	msec(1000);
	}
}
void msec(unsigned int x)
{
	while(x!=0)
		x--;
}