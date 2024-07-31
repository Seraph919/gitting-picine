/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:23:22 by asoudani          #+#    #+#             */
/*   Updated: 2024/07/31 21:38:03 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	fstrln(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = fstrln(dest);
	while (src[i])
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (n);
}
