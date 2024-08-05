/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:04:12 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/05 13:13:24 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fpu(char c)
{
	write(1, &c, 1);
}

int fstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == str[i+1])
			return 0;
		if (str[i] == '-' || str[i] == '+')
			return 0;
		i++;
	}
	return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
	long	i;
	long	n;
	int	k;
	int	lb;
	char *hexa;

	n = nbr;
	i = 1;
	lb = fstr(base);
	hexa = "0123456789abcdef";
	if (lb > 1 && lb != 16)
	{
		if (nbr < 0)
		{
		fpu('-');
		n *= -1;
		}
		while (i * lb < n)
		{
			i *= lb;
		}
		while (i > 0)
		{
			fpu((n / i) + '0');
			n = n % i;
			i = i / lb;
		}
	}
	if(lb == 16)
	{
		if (n < 0)
		{
			fpu('-');
			n *= -1;
		}
		fpu(hexa[(n / 16)]);
		fpu(hexa[n % 16]);
	}
}

int main()
{
	ft_putnbr_base(22, "1284567891awed12");
}
