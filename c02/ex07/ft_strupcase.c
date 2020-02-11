#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int idx;

	idx = 0;
	while(str[idx] != '\0')
	{
		if(!(str[idx] >= 'A' && str[idx] <= 'Z'))
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "hello world"; 
	
	printf("%s\n",ft_strupcase(str));

}
