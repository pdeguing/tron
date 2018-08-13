/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:23:55 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 11:03:30 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

t_object	*object_new(int id)
{
	t_object	*new;

	new = (t_object *)malloc(sizeof(t_object));
	if (!new)
		return (NULL);
	new->id = id;
	new->x = 0;
	new->y = 0;
	new->size = 0;
	new->direction = 0;
	new->color = WHITE;
	return (new);
}

void		object_init(t_object *object, int x, int y, int size, int direction)
{
	object->x = x;
	object->y = y;
	object->size = size;
	object->direction = direction;	
}

void		object_display(t_object *object, t_game *game)
{
	int		i;
	int		j;
	int		xcpy;
	int		ycpy;

	j = 0;
	ycpy = object->y;
	while (j < object->size)
	{
		i = 0;
		xcpy = object->x;
		while (i < object->size)
		{
			mlx_pixel_put(game->mlx_ptr, game->win_ptr, xcpy, ycpy, object->color);
			xcpy++;
			i++;
		}
		ycpy++;
		j++;
	}
}

void			object_place(t_object *object, t_game *game)
{
	int			i;
	int			j;
	int			xcpy;
	int			ycpy;

	j = 0;
	ycpy = object->y;
	while (j < object->size)
	{
		i = 0;
		xcpy = object->x;
		while (i < object->size)
		{
			game->matrix[xcpy][ycpy] = object->id;
			xcpy++;
			i++;
		}
		ycpy++;
		j++;
	}
}
