/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:38:27 by asoudani          #+#    #+#             */
/*   Updated: 2024/07/31 20:22:10 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;
	int		d;
	char	*p;

	d = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[d])
		{
			n = ft_strcmp(&str[i], &to_find[d]);
			if (n == 0)
			{
				p = &str[i];
				return (p);
			}
		}
		i++;
	}
	return (0);
}
