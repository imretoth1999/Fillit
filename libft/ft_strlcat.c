/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:13:30 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 11:05:03 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t i;
	size_t j;

	if (num == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dest[i] && i < num)
		i++;
	while (src[j] && (i + j) < (num - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < num)
		dest[i + j] = 0;
	return (i + ft_strlen(src));
}
