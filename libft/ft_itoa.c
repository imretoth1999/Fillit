/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:19:10 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/28 13:30:05 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_n_size(int n)
{
	int		size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		x;
	int		neg;

	neg = 1;
	x = ft_n_size(n);
	str = (char *)malloc(sizeof(char *) * x + 1);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[x] = '\0';
	if (n < 0)
	{
		neg = -1;
		str[0] = '-';
	}
	x--;
	while (n)
	{
		str[x] = (((n % 10) * neg) + '0');
		x--;
		n = n / 10;
	}
	return (str);
}
