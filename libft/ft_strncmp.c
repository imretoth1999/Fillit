/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:21:25 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:21:26 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t num)
{
	unsigned int	i;

	if (num == 0)
		return (0);
	i = 0;
	while ((str1[i] == str2[i]) && (str1[i]) && (str2[i]) && (i < num))
		i++;
	if (i == num)
		i--;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
