/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:45:45 by npremont          #+#    #+#             */
/*   Updated: 2023/10/16 18:12:02 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	if (s[i + 1] == c)
		return ((char *)&s[i + 1]);
	while (i != 0)
	{
		if (c == s[i])
			return ((char *)&s[i]);
		--i;
	}
	return (0);
}
