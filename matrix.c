/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:22:37 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 11:46:30 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

char				**create_matrix()
{
	char			**matrix;
	int				x;
	int				y;

	matrix = (char **)malloc(sizeof(char *) * (WINSIZE + 1));
	if (!matrix)
		return (NULL);
	matrix[WINSIZE] = NULL;
	x = 0;
	while (x < WINSIZE)
	{
		matrix[x] = ft_strnew(WINSIZE);
		if (!matrix[x])
			return (NULL);
		y = 0;
		while (y < WINSIZE)
		{
			matrix[x][y] = '.';
			y++;
		}
		x++;
	}
	return (matrix);
}

void				print_matrix(char **matrix)
{
	int				x;

	x = 0;
	while (matrix[x])
	{
		ft_putendl(matrix[x]);
		x++;
	}
}

void			alterate_matrix(char **matrix, int x, int y, char c)
{
	matrix[x][y] = c;
	matrix[x][y + 1] = c;
	matrix[x + 1][y] = c;
	matrix[x + 1][y + 1] = c;
}
