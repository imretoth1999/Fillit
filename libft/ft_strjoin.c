/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:17:15 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 11:11:53 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ret;

	if (s1 != NULL && s2 != NULL)
		ret = ft_strnew(2 + ft_strlen(s1) + ft_strlen(s2));
	if (s2 == NULL && s1 != NULL)
		ret = ft_strnew(1 + ft_strlen(s1));
	if (s1 == NULL && s2 != NULL)
		ret = ft_strnew(1 + ft_strlen(s2));
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (ret == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_strcpy(ret, s1);
	if (s2 != NULL && s1 != NULL)
		ft_strcat(ret, s2);
	if (s1 == NULL)
		ft_strcpy(ret, s2);
	return (ret);
}
