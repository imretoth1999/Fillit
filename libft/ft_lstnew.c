/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:34:02 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:34:03 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;
	void	*cpy;

	cpy = NULL;
	if (!content)
		content_size = 0;
	else
	{
		cpy = ft_memalloc(content_size);
		if (cpy == NULL)
			return (NULL);
		cpy = ft_memcpy(cpy, content, content_size);
	}
	ret = (t_list *)ft_memalloc(sizeof(t_list));
	if (ret != NULL)
	{
		ret->content = cpy;
		ret->content_size = content_size;
		ret->next = NULL;
		return (ret);
	}
	return (NULL);
}
