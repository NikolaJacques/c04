/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:43:30 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/16 16:08:24 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[i + j])
		{
			if (i == 0)
				break ;
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	return (i);
}

int	ft_get_len_str(char *str, char *base)
{
	int	i;
	int	j;
	int	is_num;

	i = 0;
	j = 0;
	is_num = 1;
	while (str[i] && is_num)
	{
		is_num = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				is_num = 1;
				break ;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (i - 1);
}

int	ft_convert(char ch, char *base, int len_base)
{
	int	i;

	i = 0;
	while (i < len_base)
	{
		if (base[i] == ch)
			break ;
		i++;
	}
	return (i);
}

int	ft_process_num(char *str, char *base)
{
	int	multiplier;
	int	total;
	int	len_b;
	int	len_str;
	int	i;

	i = 0;
	len_str = ft_get_len_str(str, base);
	if (len_str == 0)
		return (0);
	len_b = get_len_base(base);
	multiplier = 1;
	total = 0;
	while (len_str > 0)
	{
		total += ft_convert(str[len_str - 1], base, len_b) * multiplier;
		len_str--;
		multiplier *= len_b;
	}
	return ((int)total);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	negative;
	int	is_num;
	int	i;
	int	j;

	i = -1;
	j = -1;
	result = 0;
	negative = 1;
	is_num = 0;
	while (str[++i] && !is_num)
	{
		while (base[++j])
		{
			if (*str == '-')
				negative *= -1;
			if (str[i] == base[j])
				is_num = 1;
		}
		j = 0;
	}
	result = ft_process_num(str + i - 1, base);
	return (result * negative);
}
