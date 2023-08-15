int ft_is_num(char ch, char *base)
{
	while(*base)
	{
		if (ch == *base)
			return (1);
		base++;
	}
	return (0);
}

int ft_get_len_str(char *str, char *base)
{
	int len;

	len = 0;
	while (ft_is_num(*str, base))
	{	
		len++;
		str++;
	}
	return (len);
}

int ft_convert(char ch, char *base, int len_base)
{
	int i;

	i = 0;

	while (i < len_base)
	{
		if (base[i] == ch)
			break;
		i++;
	}
	return (i);
}

int ft_process_num(char *str, char *base)
{
	int multiplier;
	int total;
	int len_base;
	int len_str;
	int i;

	i = 0;
	len_str = ft_get_len_str(str, base);
	if (len_str == 0)
		return (0);
	while (base[i])
	{
		i++;
	}
	len_base = i;
	multiplier = 1;
	total = 0;
	while (len_str > 0)
	{
		total += ft_convert(str[len_str - 1], base, len_base) * multiplier;
		len_str--;
		multiplier *= len_base;
	}
	return ((int)total);
}

int ft_atoi_base(char *str, char *base)
{
		int result;
		int negative;

		result = 0;
		negative = 1;
		while (!ft_is_num(*str, base) && *str)
		{
			if (*str == '-')
			{
				negative *= -1;
			}
			str++;
		}
		result = ft_process_num(str, base);
		return (result * negative);
}