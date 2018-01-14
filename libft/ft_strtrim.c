/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:31:25 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:31:26 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		n;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	ret = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret == NULL)
		return (NULL);
	n = ft_strlen(s) - 1;
	while (s[n] == ' ' || s[n] == '\n' || s[n] == '\t')
		n--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = 0;
	while (i <= n)
		ret[j++] = s[i++];
	ret[j] = '\0';
	return (ret);
}
