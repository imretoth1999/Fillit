/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:12:25 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:53:02 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*ret;

	ret = dest;
	while (*ret)
		ret++;
	while (*src)
	{
		*ret = *src;
		ret++;
		src++;
	}
	*ret = 0;
	return (dest);
}
