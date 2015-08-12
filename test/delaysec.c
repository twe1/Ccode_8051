void delay_ms()
{
	unsigned int c;
	for(c=1;c!=1000;c++);

}

void delay_sec(unsigned int n)
{
	unsigned int c, x;
	for(x=1;x<=n;x++)
	{
		for(c=1;c!=100;c++)
			delay_ms();	
	}
}

  /*
void msec(unsigned int x)
{
	while(x!=0)
		x--;
}

void sec(unsigned int x)
{
	while(x!=0)
	{
	x--;
	msec(1000);
	}
}
*/
