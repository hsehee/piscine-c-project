
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

int main()
{
	
	printf("%d \n", strcmp("hello", "hello"));
	printf("%d \n", strcmp("a", "b"));
	printf("%d \n", strcmp("", "a"));
	printf("%d \n", strcmp("", ""));
	printf("%d \n", strcmp("", "    $%#@#$"));
	printf("%d \n", strcmp("wor1ld", "wor2ld"));
	printf("-------------------------------\n");
	printf("%d \n", ft_strcmp("hello", "hello"));
	printf("%d \n", ft_strcmp("a", "b"));
	printf("%d \n", ft_strcmp("", "a"));
	printf("%d \n", ft_strcmp("", ""));
	printf("%d \n", ft_strcmp("", "    $%#@#$"));
	printf("%d \n", ft_strcmp("wor1ld", "wor2ld"));
}
