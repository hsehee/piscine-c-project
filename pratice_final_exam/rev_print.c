void putchar(char ch)
{
	write(1, &ch, 1);
}

int strlen(char *str)
{
	int idx;
	idx = 0;
	while(str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}

char *rev_print(char *str)
{
	int len;
	len = strlen(str);

	while(len >= 0)
	{
		putchar(str[len]);
		len--;
	}

	return (str);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n",1);
	rev_print("Ponies are awesome");
	write(1, "\n",1);
	rev_print("");
	write(1, "\n",1);
	return (0);
}
