void putstr(char *str) // < str = "./a.out"
{
	int idx;
	idx = 0;
	while (str[idx] != '\0')
	{
		putchar(str[idx]);
		idx++;
	}
}

void putnbr(int nb)
{
	if(nb >= 10)
		putnbr(nb / 10);
	putchar(nb % 10 + '0');
}

void putchar(char ch)
{
	write(1, &ch, 1);
}

int main(int argc, char *argv[])
{
	putnbr(argc);
	putstr(argv[0]);
	putstr("\n");
	putstr(argv[1]);
	putstr("\n");
	putstr(argv[2]);
	putstr("\n");
}
