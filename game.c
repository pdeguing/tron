/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:31:26 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 12:03:32 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

t_game			*game_new(void *mlx_ptr, void *win_ptr)
{
	t_game		*new;

	new = (t_game *)malloc(sizeof(t_game));
	if (!new)
		return (NULL);
	new->mlx_ptr = mlx_ptr;
	new->win_ptr = win_ptr;
	new->matrix = NULL;
	return (new);
}

void			game_grid(t_game *game, int spacing, int color)
{
	int			x;
	int			y;

	y = 0;
	while (y < WINSIZE)
	{
		x = 0;
		while (x < WINSIZE)
		{
			mlx_pixel_put(game->mlx_ptr, game->win_ptr, x, y, color);
			x++;
		}
		y += spacing;
	}
}
