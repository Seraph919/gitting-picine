/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:17:35 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/11 21:02:19 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
