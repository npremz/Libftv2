/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:07 by npremont          #+#    #+#             */
/*   Updated: 2023/10/17 00:07:56 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_str;
	char	*src_str;

	dst_str = (char *)dst;
	src_str = (char *)src;
	i = 0;
	while (i < len)
	{
		dst_str[i] = src_str[i];
		i++;
	}
	return (dst);
}
