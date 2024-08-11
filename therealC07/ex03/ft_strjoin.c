/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:27:32 by asoudani          #+#    #+#             */
/*   Updated: 2024/08/11 18:27:43 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[n])
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int strl(char *s)
{
	int  i = 0;
	while (s[i])
		i++;
	return i;
}

char *ft_strjoin(int size, char **strs, char* sep)
{
	int sizeofmal = 0;
	int i = 0;
	while (i < size -1)
	{
		sizeofmal += strl(sep);
		i++;
	}
	i = 0;
	while (i < size)
	{
		sizeofmal += strl(strs[i]);
		i++;
	}
	char *mal = malloc(sizeofmal + 1);
	if (!mal) return NULL;
	mal[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(mal, strs[i]);
		if (i  != size -1)
			ft_strcat(mal, sep);
		i++;
	}
	mal[sizeofmal + 1] = '\0';
	return mal;
}
/*
int main()
{
    char *strs[] = {"Hello", "World", "!"};
    int size = 3;
    char *sep = ", ";
    
    char *result = ft_strjoin(size, strs, –sep);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
*/