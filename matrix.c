/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:22:37 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 11:04:23 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

int					matrix_new(t_game *game)
{
	int				**matrix;
	int				x;

	matrix = (int **)malloc(sizeof(int *) * WINSIZE);
	if (!matrix)
		return (-1);
	x = 0;
	while (x <= WINSIZE)
	{
		matrix[x] = (int *)malloc(sizeof(int) * WINSIZE);
		if (!matrix[x])
		{
			while (matrix[--x])
			{
				free(matrix[x]);
				matrix[x] = NULL;
			}
			free(matrix);
			matrix = NULL;
			return (-1);
		}
		x++;
	}
	game->matrix = matrix;
	return (0);
}

void				matrix_init(t_game *game)
{
	int				x;
	int				y;

	x = 0;
	while (x <= WINSIZE)
	{
		y = 0;
		while (y <= WINSIZE)
		{
			game->matrix[x][y] = 0;
			y++;
		}
		x++;
	}
}

void			matrix_del(t_game *game)
{
	int			x;

	x = 0;
	while (x <= WINSIZE)
	{
		free(game->matrix[x]);
		game->matrix[x] = NULL;
		x++;
	}
	free(game->matrix);
	game->matrix = NULL;
}
