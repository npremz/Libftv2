/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:07 by npremont          #+#    #+#             */
/*   Updated: 2023/10/16 18:24:25 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_str;
	char	*src_str;
	char	temp[len];

	dst_str = (char *)dst;
	src_str = (char *)src;
	i = 0;
	while (i < len)
	{
		temp[i] = src_str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_str[i] = temp[i];
		i++;
	}
	return (dst);
}
