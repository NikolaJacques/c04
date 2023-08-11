int ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int ft_process_num(char *str)
{
	double multiplier;
	double total;

	multiplier = 1;
	total = 0;
	while (ft_is_num(*str))
	{
		multiplier /= 10;
		total += (*str - 48) * multiplier;
		str++;
	}
	total /= multiplier;
	return ((int)total);
}


int	ft_atoi(char *str)
{
		int result;
		int negative;

		result = 0;
		negative = 1;
		while (!ft_is_num(*str))
		{
			if (*str == '-')
			{
				negative *= -1;
			}
			str++;
		}
		result = ft_process_num(str);
		return (result * negative);
}