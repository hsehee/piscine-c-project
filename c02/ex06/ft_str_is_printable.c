int		ft_str_is_printable(char *str)
{
	 int idx;

	 idx = 0;
	 while(str[idx] != '\0')
	 {
		if(str[idx] < 32 || str[idx] >= 127)
			return(0);
	 	idx++;
	 }
	 return(1);
}

int		main()
{
	char *str = "Hello\rworld";
	char *str2 = "Hello world";

	printf("%d \n", ft_str_is_printable(str));
	printf("%d \n", ft_str_is_printable(str2));

}
