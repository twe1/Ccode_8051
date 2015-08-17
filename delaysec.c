void delay_ms(unsigned int x)
{
	unsigned int c,i;
	for(i=1;i<=x;i++)
		for(c=1;c!=1000;c++);

}

void delay_sec(unsigned int n)
{
	unsigned int c, x;
	for(x=1;x<=n;x++)
	{
		for(c=1;c!=100;c++)
			delay_ms(1);	
	}
}

 
