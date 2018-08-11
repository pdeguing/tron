/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 17:29:05 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 12:24:08 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

int					deal_key(int key, void *param)
{
	t_param			*curr;
	static int		x = (WINSIZE / 2) - (PLAYERSIZE / 2);
	static int		y = (WINSIZE / 2) - (PLAYERSIZE / 2);
	static int		start = 0;
	
	curr = (t_param *)param;
	if (start == 0)
		put_player(curr->mlx_ptr, curr->win_ptr, x, y, curr->matrix);
	if (key == 38)
	{
		x -= PLAYERSIZE;
		put_player(curr->mlx_ptr, curr->win_ptr, x, y, curr->matrix);
	}
	if (key == 37)
	{
		x += PLAYERSIZE;
		put_player(curr->mlx_ptr, curr->win_ptr, x, y, curr->matrix);
	}
	if (key == 40)
	{
		y += PLAYERSIZE;
		put_player(curr->mlx_ptr, curr->win_ptr, x, y, curr->matrix);
	}
	if (key == 34)
	{
		y -= PLAYERSIZE;
		put_player(curr->mlx_ptr, curr->win_ptr, x, y, curr->matrix);
	}
	return (0);
}

int					main()
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_param			*param;
	char			**matrix;
	
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, WINSIZE, WINSIZE, "tron");
	matrix = create_matrix();
	param = param_new(mlx_ptr, win_ptr, matrix);
	mlx_key_hook(win_ptr, deal_key, param); 
	mlx_loop(mlx_ptr);
}
