/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:39:23 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/16 16:10:51 by nikjacqu         ###   ########.fr       */
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
		return ;
	}
	else
	{
		recursive(nb / 10);
	}
	putchar((nb % 10) + 48);
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
