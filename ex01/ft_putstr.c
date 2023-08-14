int ft_strlen(char *str)
{
	int len;

	len = (int)str;
	while (*str++)
	{}
	return ((int)str - len);
}

#include <unistd.h>

void ft_putstr(char *str)
{
	int len;

	len = ft_strlen(str);
	write(1, str, len);
}

int main(void)
{
	char *str = "Some string";
	ft_putstr(str);
}