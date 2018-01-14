/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbardi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:00:01 by bbardi            #+#    #+#             */
/*   Updated: 2017/01/21 12:25:03 by bbardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

t_list		*free_list(t_list *list)
{
	t_etris	*tetris;
	t_list	*nxt;

	while (list)
	{
		tetris = (t_etris *)list->content;
		nxt = list->next;
		free_tetris(tetris);
		ft_memdel((void **)&list);
		list = nxt;
	}
	return (NULL);
}

void		free_tetris(t_etris *tetri)
{
	int i;

	i = 0;
	while (i < tetri->height)
	{
		ft_memdel((void **)(&(tetri->pos[i])));
		i++;
	}
	ft_memdel((void **)(&(tetri->pos)));
	ft_memdel((void **)&tetri);
}

t_etris		*tetris_new(char **pos, int width, int height, char value)
{
	t_etris		*tetris;

	tetris = ft_memalloc(sizeof(t_etris));
	tetris->pos = pos;
	tetris->width = width;
	tetris->height = height;
	tetris->value = value;
	return (tetris);
}

t_point		*point_new(int x, int y)
{
	t_point		*ret;

	ret = ft_memalloc(sizeof(t_point));
	ret->x = x;
	ret->y = y;
	return (ret);
}
