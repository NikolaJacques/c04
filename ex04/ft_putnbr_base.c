/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:42:24 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/15 20:43:23 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	convert_print(long nb, char *base)
{
	ft_putchar(base[nb]);
}

int	len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

void	ft_recursive(long nb, char *base, int len_b)
{
	if (nb / len_b == 0)
	{
		convert_print(nb, base);
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

	temp = nbr;
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	len_b = len_base(base);
	ft_recursive(temp, base, len_b);
}
