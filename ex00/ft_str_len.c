int ft_strlen(char *str)
{
	int len;

	len = (int)str;
	while (*str)
	{
		str++;
	}
	return ((int)str - len);
}
