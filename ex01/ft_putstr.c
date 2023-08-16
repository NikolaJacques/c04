/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikjacqu <nikjacqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:36:42 by nikjacqu          #+#    #+#             */
/*   Updated: 2023/08/16 13:34:55 by nikjacqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	fct_strlen(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = (int)str;
	while (*str)
	{
		str++;
	}
	return ((int)str - len);
}

void	ft_putstr(char *str)
{
	int	len;

	if (!str)
		return ;
	len = fct_strlen(str);
	write(1, str, len);
}
