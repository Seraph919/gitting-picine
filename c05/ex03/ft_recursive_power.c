/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:58:22 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/01 21:59:59 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
