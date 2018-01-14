/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:14:29 by bbardi            #+#    #+#             */
/*   Updated: 2016/12/27 10:14:31 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*ret;
	t_list			*ret_f;

	if (lst && f)
	{
		ret = f(lst);
		if (ret)
		{
			ret_f = ret;
			while (lst->next)
			{
				lst = lst->next;
				ret->next = f(lst);
				ret = ret->next;
				if (!ret)
					return (NULL);
			}
			return (ret_f);
		}
	}
	return (NULL);
}
