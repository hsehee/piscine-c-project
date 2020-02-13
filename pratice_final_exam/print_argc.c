void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_putnbr(int nb)
{
	if(nb > 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0'); //(remember integer to chracter)
}

int main(int argc, char *argv[])
{
	ft_putnbr(argc);
}
