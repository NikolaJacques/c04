/* ft_error_handling(char *base)
{
	int i;
	int j;

	i = 0;
	while(base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 1)
		return (0);
	return (1);
}

char ft_convert(int c, char *base, int len)
{
	return (0);
}

void ft_putnbr_base(int nbr, char *base)
{
	if (!ft_error_handling(base))
		return (0);
} */