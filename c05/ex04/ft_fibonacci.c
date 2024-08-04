/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:34:24 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/04 13:40:31 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 1)
		return (1);
	else if (index == 0 && index + 1 == 1)
	{
		return (0);
	}
	else
		return (ft_fibonacci (index -1) + ft_fibonacci (index - 2));
}
