/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:53:02 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/12 10:32:20 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	fstrl(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*fstrcat(char *d, char *s)
{
	int	i;
	int	ld;

	ld = fstrl(d);
	i = 0;
	while (s[i])
	{
		d[ld + i] = s[i];
		i++;
	}
	d[ld + i] = '\0';
	return (d);
}

int	malsize(int size, char **strs, char *sep)
{
	int	i;
	int	sizeofmal;

	i = 0;
	sizeofmal = 0;
	sizeofmal += fstrl(sep) * (size - 1);
	while (i < size)
	{
		sizeofmal += fstrl(strs[i]);
		i++;
	}
	return (sizeofmal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sizeofmal;
	int		i;
	char	*mal;

	i = 0;
	sizeofmal = malsize(size, strs, sep);
	mal = malloc(sizeofmal + 1);
	if (!mal)
		return (NULL);
	mal[0] = '\0';
	if (size == 0)
		return (mal);
	while (i < size)
	{
		fstrcat(mal, strs[i]);
		if (i != size -1)
			fstrcat(mal, sep);
		i++;
	}
	mal[sizeofmal + 1] = '\0';
	return (mal);
}
