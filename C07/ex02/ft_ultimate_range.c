/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:45:37 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/11 18:22:49 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*a;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (-1);
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	*range = a;
	return (len);
}

/*
#include <stdio.h>
int main()
{
    int *r;
    int range_len;
    int i;

    range_len = ft_ultimate_range(&r, 12, 15);
    if (range_len == -1)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Range length: %d\n", range_len);
    for (i = 0; i < range_len; i++)
    {
        printf("%d ", r[i]);
    }
    printf("\n");

    free(r);
    return (0);
}
*/
