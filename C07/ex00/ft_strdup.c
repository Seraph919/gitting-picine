/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:37:28 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/13 19:53:48 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	srcl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(srcl(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*






#include <stdio.h>
int main()
{
	char *ss = "wachakhaydyali hani lya..w";
	char *s = ft_strdup(ss);
	printf("%s", s);
}
*/
