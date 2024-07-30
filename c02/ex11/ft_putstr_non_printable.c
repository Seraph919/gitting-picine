/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:59:42 by asoudani          #+#    #+#             */
/*   Updated: 2024/07/29 14:47:59 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			a[2];
	char			*hexa;
	unsigned char	conv;

	i = 0;
	hexa = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || (unsigned char)str[i] > 126)
		{
			conv = (unsigned char) str[i];
			a[0] = hexa[conv / 16];
			a[1] = hexa[conv % 16];
			write (1, "\\", 1);
			write (1, &a[0], 1);
			write (1, &a[1], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
