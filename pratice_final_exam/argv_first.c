void putstr(char *str)
{
	int idx;
	idx = 0;
	while(str[idx] != 0)
	{
		putchar(str[idx]);
		idx++;
	}
}

void putchar(char ch)
{
	write(1, &ch, 1);
}

void putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb / 10);
	putchar(nb % 10 + '0');
}

int main(int argc, char *argv[])
{
	/*
argv : char **
argv[0] : char *
	 */
	putnbr(argc);
	putstr(argv[0]);
}
