int		ft_str_is_alpha(char *str)
{
	int	idx = 0;

	while(str[idx] != '\0')
	{
		if( !( (str[idx] >= 'a' && str[idx] <= 'z') 
			|| (str[idx] >= 'A' && str[idx] <='Z') ) )
		{
			return(0);
		}
		idx++;
	}
	return(1);
}

int		main()
{
	printf("%d\n", ft_str_is_alpha("sdasd"));
	printf("%d\n", ft_str_is_alpha("sd123"));
	printf("%d\n", ft_str_is_alpha("@#$@#$"));
	printf("%d\n", ft_str_is_alpha(""));

}
