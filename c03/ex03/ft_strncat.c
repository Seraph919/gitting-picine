/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:37:28 by asoudani          #+#    #+#             */
/*   Updated: 2024/07/31 10:19:35 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = strl(dest);
	n = 0;
	while (n < nb && src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
