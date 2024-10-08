/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:34:01 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/01 16:36:32 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
        return 1;
	else if (nb < 0)
        return 0;
	else if (nb == 1)
	{
		return (1);
	}
	return nb * ft_recursive_factorial(nb - 1);
}
