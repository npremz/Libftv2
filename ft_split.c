/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:22:45 by npremont          #+#    #+#             */
/*   Updated: 2023/10/16 01:03:37 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(char *str, char charsep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charsep)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != charsep)
			i++;
	}
	return (count);
}

void	ft_stralloc(char *str, char charsep, char **str_tab)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charsep)
			i++;
		while (str[i] != '\0' && str[i] != charsep)
		{
			i++;
			count++;
		}
		if (count > 0)
		{
			str_tab[j] = malloc(sizeof(char) * (count + 1));
			j++;
			count = 0;
		}
	}
	str_tab[j] = 0;
}

char	**ft_split(char *str, char charsep)
{
	char	**str_tab;
	int		i;
	int		array_i;
	int		str_i;

	str_tab = (char **)malloc(sizeof(char *) * (ft_count(str, charsep) + 1));
	ft_stralloc(str, charsep, str_tab);
	i = 0;
	array_i = 0;
	str_i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charsep)
			i++;
		while (str[i] != '\0' && str[i] != charsep)
			str_tab[array_i][str_i++] = str[i++];
		if (str_tab[array_i] != 0)
		{
			str_tab[array_i][str_i] = '\0';
			str_i = 0;
			array_i++;
		}
	}
	return (str_tab);
}
