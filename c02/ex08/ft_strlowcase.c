char	*ft_strlowcase(char *str)
{
	int idx;
	
	idx = 0;
	while(str[idx] != '\0')
	{
		if(str[idx] >= 'A' && str[idx] <= 'Z')
		{
			str[idx] = str[idx] + 32;
		}
		idx++;
	}
	return(str);
}

int		main()
{
	char str[] = "HELLo WorlD";
	
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
}
