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

int	ft_iterative_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_iterative_power(nb, power - 1));
}
