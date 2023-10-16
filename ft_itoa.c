/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:27:41 by npremont          #+#    #+#             */
/*   Updated: 2023/10/16 16:45:15 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getstrsize(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		++count;
	}
	return (count);
}

char	*ft_putnbr_in_str(long int nb, char *str, int pos)
{
	if (nb < 0)
	{
		str[0] = '-';
		return (ft_putnbr_in_str(nb * -1, str, pos));
	}
	else
	{
		if (nb < 10)
		{
			str[pos] = nb + 48;
		}
		else
		{
			ft_putnbr_in_str(nb / 10, str, pos - 1);
			str[pos] = nb % 10 + 48;
		}
		return (str);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		str_size;

	str_size = ft_getstrsize(n);
	str = malloc((str_size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[str_size] = '\0';
	str = ft_putnbr_in_str(n, str, str_size - 1);
	return (str);
}
