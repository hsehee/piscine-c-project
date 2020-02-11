char	*ft_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;
	while(src[idx] != 0)
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return(dest);
}

int main()
{
	char dest[20];
	char *result;
	char *src = "hello";
	result = ft_strcpy(dest, src);

	printf("%s - %p \n", dest, dest);
	printf("%s - %p \n", result, result);


}
