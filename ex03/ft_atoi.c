/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:40:06 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/16 14:05:57 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

/*
** if condition checks if preceding string is a plus or minus
** if not, returns 0
*/
int	process_num(char *str)
{
	double	multiplier;
	double	total;

	multiplier = 1;
	total = 0;
	if (*(str - 1) == '-' || *(str - 1) == '+')
	{
		while (is_num(*str))
		{
			multiplier /= 10;
			total += (*str - 48) * multiplier;
			str++;
		}
		total /= multiplier;
	}
	return ((int)total);
}

int	ft_atoi(char *str)
{
	int	result;
	int	negative;

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
