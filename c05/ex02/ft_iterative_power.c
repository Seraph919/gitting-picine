/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:37:06 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/05 13:46:36 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    i = power;
    while (i > 0)
    {
        result *= nb;
        i--;
    }
    return (result);
}
