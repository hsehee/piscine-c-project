void putnbr(int nb)
{
	if( nb > 10)
		putnbr(nb/10);
	putchar(nb%10+'0');
}

void putchar(char ch)
{
	write(1, &ch, 1);
}

int	main(void)
{
	int i;

	i = 1;
	while(i < 100)
	{
		if(i % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if(i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	
}
