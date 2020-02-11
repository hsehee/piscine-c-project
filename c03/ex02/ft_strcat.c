char	*ft_strcat(char *dest, char *src)
{
	int idx;

	idx = 0;
	while(dest[idx] != 0)
	{
	idx++;
	}
	int src_idx;

	src_idx = 0;
	while (src[src_idx] != 0)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = 0;
	return dest;
}



int main()
{
	char str[20] = "hello";
	char *src = " world";

	printf("%s \n",strcat(str, src));
	
	char str2[20] = "hello";
	printf("%s \n",ft_strcat(str2, src));
}
