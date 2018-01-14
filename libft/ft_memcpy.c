/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:30:31 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:30:31 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned int	i;
	void			*ret;

	ret = dest;
	i = 0;
	while (i < num)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	return (ret);
}
