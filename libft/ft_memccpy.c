/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:36:35 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:36:36 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	char		*s1;
	const char	*s2;

	s1 = (char *)dest;
	s2 = (const char *)src;
	while (num != 0)
	{
		if (*s2 == c)
		{
			*s1++ = *s2++;
			return (s1);
		}
		*s1++ = *s2++;
		num--;
	}
	return (NULL);
}
