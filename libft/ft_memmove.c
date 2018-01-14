/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:35:45 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/28 12:13:30 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	void		*ret;

	ret = dest;
	if (dest < src)
		while ((unsigned char)(dest - ret) < num)
			*(char *)dest++ = *(char *)src++;
	else
		while (num-- > 0)
			((char *)dest)[num] = ((char *)src)[num];
	return (ret);
}
