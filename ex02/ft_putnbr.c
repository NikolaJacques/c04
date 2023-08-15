/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:39:23 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/15 20:39:58 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char ch)
{
	write(1, &ch, 1);
}

void	recursive(long nb)
{
	if (nb / 10 == 0)
	{
		putchar((char)nb + 48);
	}
	else
	{
		recursive(nb / 10);
		recursive(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	long	temp;

	temp = nb;
	if (temp < 0)
	{
		putchar('-');
		temp *= -1;
	}
	recursive(temp);
}
