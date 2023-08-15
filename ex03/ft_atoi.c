int is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int process_num(char *str)
{
	double multiplier;
	double total;

	multiplier = 1;
	total = 0;
	while (is_num(*str))
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
		while (!is_num(*str))
		{
			if (*str == '-')
			{
				negative *= -1;
			}
			str++;
		}
		result = process_num(str);
		return (result * negative);
}