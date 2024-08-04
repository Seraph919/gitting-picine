/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:39:31 by asoudani          #+#    #+#             */
/*   Updated: 2024/07/30 09:32:02 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0])
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] -= 32;
	}
	while (str[i])
	{
		//edit those so it can cover more cases..
		if ((str[i] == ' ' || str[i] == '+' || str[i] == '-' || str[i] == '\n')
			&& (str[i + 1] <= 'z' && str[i + 1] >= 'a'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
