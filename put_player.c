/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:52:41 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 12:28:24 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

// edit this function so it takes a parameter that allows to put the player, or the trail, or the AI
// so need parameter that will change the color and the char sent to alterate_matrix()

void	put_player(void *mlx_ptr, void *win_ptr, int x, int y, char **matrix)
{
	int		i;
	int		j;
	int		xcpy;
	int		ycpy;

	xcpy = x;
	ycpy = y;
	alterate_matrix(matrix, x, y, 'X');
	j = 0;
	while (j < PLAYERSIZE)
	{
		i = 0;
		xcpy = x;
		while (i < PLAYERSIZE)
		{
			mlx_pixel_put(mlx_ptr, win_ptr, xcpy, ycpy, CURRENT);
			xcpy++;
			i++;
		}
		ycpy++;
		j++;
	}
}
