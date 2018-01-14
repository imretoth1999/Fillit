/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:13:37 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 14:28:08 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *rez;

	rez = (char *)str + ft_strlen(str);
	while (*rez != c)
	{
		if (rez == str)
			return (NULL);
		rez--;
	}
	return (rez);
}
