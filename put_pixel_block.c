/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:52:41 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 10:50:08 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

// edit this function so it takes a parameter that allows to put the player, or the trail, or the AI
// so need parameter that will change the color and the char sent to alterate_matrix()

void	put_pixel_block(t_param *param, int x, int y, int color, char c)
{
	int		i;
	int		j;
	int		xcpy;
	int		ycpy;

	xcpy = x;
	ycpy = y;
	alterate_matrix(param->matrix, x, y, c);
	j = 0;
	while (j < PLAYERSIZE)
	{
		i = 0;
		xcpy = x;
		while (i < PLAYERSIZE)
		{
			mlx_pixel_put(param->mlx_ptr, param->win_ptr, xcpy, ycpy, color);
			xcpy++;
			i++;
		}
		ycpy++;
		j++;
	}
}
