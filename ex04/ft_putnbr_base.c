/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:42:24 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/16 16:12:10 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	len_base(char *base)
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

void	ft_recursive(long nb, char *base, int len_b)
{
	if (nb / len_b == 0)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_recursive(nb / len_b, base, len_b);
		ft_recursive(nb % len_b, base, len_b);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	temp;
	int		len_b;

	len_b = len_base(base);
	if (len_b < 2)
		return ;
	temp = nbr;
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	ft_recursive(temp, base, len_b);
}
