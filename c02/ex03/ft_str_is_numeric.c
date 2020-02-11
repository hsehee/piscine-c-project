int		ft_str_is_numeric(char *str)
{
	int idx;

	idx = 0;
	while(str[idx] != '\0')
	{
		if (str[idx] >= '0' && str[idx] < '9')
			return(0);
		idx++;
	}
	return(1);
}

int		main()
{
	printf("%d\n", ft_str_is_numeric("1234"));
	printf("%d\n", ft_str_is_numeric("abcdef"));
	printf("%d\n", ft_str_is_numeric("a1234"));
	printf("%d\n", ft_str_is_numeric("   123"));
	printf("%d\n", ft_str_is_numeric("123&456"));

}
