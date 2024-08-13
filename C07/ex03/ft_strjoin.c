/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:53:02 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/13 19:50:50 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	mallocsize(char **strs, char *sep, int size)
{
	int	i;
	int	malsize;

	i = 0;
	malsize = 0;
	while (i < size)
		malsize += ft_strlen(strs[i++]) + ft_strlen(sep);
	return (malsize);
}

void	cat(int size, char **strs, char *sep, char *join)
{
	int	j;
	int	n;
	int	i;

	j = 0;
	n = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			join[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			join[n++] = sep[j++];
		i++;
	}
	join[n] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		malsize;
	char	*join;

	if (size == 0)
	{
		join = malloc(1);
		join[0] = '\0';
		return (join);
	}
	malsize = mallocsize(strs, sep, size);
	join = malloc(malsize * sizeof(char));
	if (!join)
		return (NULL);
	cat(size, strs, sep, join);
	return (join);
}
