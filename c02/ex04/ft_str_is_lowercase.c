int		ft_str_is_lowercase(char *str)
{
	int idx;

		idx =  0;
		while(str[idx] != '\0')  // str[i] != 0 posible it ??
		{	     
			if (!(str[idx] >= 'a' && str[idx] <= 'z'))
			{
			return(0);
			}
		idx++;
		}		
	return(1);
}

int		main()
{
		
}
