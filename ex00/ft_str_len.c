int ft_strlen(char *str)
{
	int len;

	len = (int)str;
	while (*str++)
	{}
	return ((int)str - len);
}

#include <stdio.h>

int main(void)
{
	char *str = "0123456789";
	printf("%d", ft_strlen(str));
}