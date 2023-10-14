/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:55:36 by npremont          #+#    #+#             */
/*   Updated: 2023/10/14 13:52:17 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s1[i] && s2[i])
				++j;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		++i;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(int ac, char *av[])
{
	(void)ac;
	printf("Myres : %s\n", ft_strnstr(av[1], av[2], strlen(av[1])));
	return (0);
}
