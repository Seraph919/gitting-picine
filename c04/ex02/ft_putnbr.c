/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 21:49:26 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/01 11:14:30 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fputchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;
	long	n;

	i = 1;
	n = nb;
	if (n < 0)
	{

		fputchar('-');
		n = -n;
	}
	while (i < nb)
	{
		i *= 10;
	}
	while (i >= 1)
	{
		fputchar(n / i + '0');
		n = n % i;
		i = i / 10;
	}
}
