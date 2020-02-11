char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int idx;

	idx = 0;
	while(dest[idx] != 0)
	{
		idx++;
	}
	int src_idx;

	src_idx = 0;
	while(src_idx < nb && src[src_idx] != 0)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return dest;
}

int main()
{
	char str[100] = "thank you jdo";
	char *src = "I promiss you pass the exam with you";

	printf("%s \n", strncat(str, src, 25));
}
