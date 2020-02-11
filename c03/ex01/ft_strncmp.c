int	ft_strcmp(char *s1, char *s2)
{
	int idx;

	idx = 0;
	while((s1[idx] == s2[idx]) && (s1[idx] != 0 || s2[idx] != 0))
	{
	idx++;
	}
	if(s1[idx] < s2[idx])
	{
		 return (-1);
	}
	else if(s1[idx] == s2[idx])
	{
		return (0);
	}
	else
		return (1);
		
}
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int idx;

	idx = 0;
	while(idx < (n-1) && (s1[idx] == s2[idx]) && (s1[idx] != 0 || s2[idx] != 0))
	{
		idx++;
	}
	return (s1[idx] - s2[idx]);
}


int main()
{
	printf("%d \n", strncmp("hello", "hello", 2));
	printf("%d \n", strncmp("a", "b", 3));
	printf("%d \n", strncmp("", "a", 4));
	printf("%d \n", strncmp("", "", 5));
	printf("%d \n", strncmp("", "    $%#@#$", 8));
	printf("%d \n", strncmp("wor1ld", "wor2ld", 5));
	printf("%d \n", strncmp("world hello", "%$^$%^@^", 7));
	printf("-------------------------------\n");
	printf("%d \n", ft_strncmp("hello", "hello", 2));
	printf("%d \n", ft_strncmp("a", "b", 3));
	printf("%d \n", ft_strncmp("", "a", 4));
	printf("%d \n", ft_strncmp("", "", 5));
	printf("%d \n", ft_strncmp("", "    $%#@#$", 8));
	printf("%d \n", ft_strncmp("wor1ld", "wor2ld", 5));
	printf("%d \n", ft_strncmp("world hello", "%$^$%^@^", 7));
}
