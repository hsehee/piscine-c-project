char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int idx;
	idx = 0;
	
	while(src[idx] != '\0' && idx < n)
	{
		dest[idx]  = *src;
		src++;
		idx++;
	}
	dest[idx] = '\0';
	return (dest);

}

int		main()
{
	char dest[10];
	char *src;
	int size = 3;

	src = "Hello";

	ft_strncpy(dest, src, size);

	printf("%s \n", dest);

}
