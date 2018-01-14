/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:12:45 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:12:46 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*ret;
	unsigned int	i;

	i = 0;
	ret = (void *)malloc(size);
	if (!ret)
		return (NULL);
	while (i < size)
	{
		*(char *)(ret + i) = 0;
		i++;
	}
	return (ret);
}
