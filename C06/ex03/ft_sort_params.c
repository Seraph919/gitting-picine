/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:55:43 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/06 11:19:05 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	strcm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sorta(int a, char **b)
{
	int		i;
	char	*tempo;

	i = 1;
	while (i < a - 1)
	{
		if (strcm(b[i], b[i + 1]) > 0)
		{
			tempo = b[i];
			b[i] = b[i + 1];
			b[i + 1] = tempo;
			i = 0;
		}
		i++;
	}
}

int	main(int a, char **b)
{
	int	i;

	i = 1;
	while (i < a)
	{
		sorta(a, b);
		puts(b[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
