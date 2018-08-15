/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:31:26 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/14 12:33:39 by pdeguing         ###   ########.fr       */
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

	y = -1;
	while (y < WINSIZE - 1)
	{
		x = 0;
		while (x < WINSIZE)
		{
			mlx_pixel_put(game->mlx_ptr, game->win_ptr, x, y, color);
			x++;
		}
		y += spacing;
	}
	x = -1;
	while (x < WINSIZE - 1)
	{
		y = 0;
		while (y < WINSIZE)
		{
			mlx_pixel_put(game->mlx_ptr, game->win_ptr, x, y, color);
			y++;
		}
		x += spacing;
	}
}
