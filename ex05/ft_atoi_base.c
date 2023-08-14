#include <unistd.h>

int ft_is_num(char ch, char *base)
{
	int i;

	i = 0;
	while(*base)
	{
		if (ch == base[i])
			return (1);
		i++;
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
	double multiplier;
	double total;
	int len_base;
	int len_str;

	len_str = ft_get_len_str(str, base);
	len_base = 0;
	while (*base)
	{
		len_base++;
	}
	multiplier = 1;
	total = 0;
	while (len_str > 0)
	{
		total += ft_convert(*str, base, len_base) * multiplier;
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
		while (!ft_is_num(*str++, base))
		{
			if (*str == '-')
			{
				negative *= -1;
			}
		}
		result = ft_process_num(str, base);
		return (result * negative);
}

int main(void)
{
	ft_atoi_base(" -++-101010ab", "01");
	ft_atoi_base("   +-2Axy", "0123456789ABCDEF");
	ft_atoi_base(" ---vnax8", "poneyvif");
}