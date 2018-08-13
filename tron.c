/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 17:29:05 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 12:03:30 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

//int					deal_key(int key, void *param)
//{
//	t_param			*curr;
//	static int		x = (WINSIZE / 2) - (PLAYERSIZE / 2);
//	static int		y = WINSIZE - PLAYERSIZE;
//	static int		start = 0;
//	
//	curr = (t_param *)param;
//	ft_putnbr(key);
//	if (start == 0 && key == 36)
//	{
//		mlx_clear_window(curr->mlx_ptr, curr->win_ptr);
//		move_automatic(curr, x, y, BLUE, 'X');
//		start = 1;
//		return (0);
//	}
//	if (key == 38)
//	{
//		put_pixel_block(curr, x, y, BLUE, '#');
//		x -= PLAYERSIZE;
//		put_pixel_block(curr, x, y, PLAYERCOLOR, 'X');
//	}
//	if (key == 37)
//	{
//		put_pixel_block(curr, x, y, BLUE, '#');
//		x += PLAYERSIZE;
//		put_pixel_block(curr, x, y, PLAYERCOLOR, 'X');
//	}
//	if (key == 40)
//	{
//		put_pixel_block(curr, x, y, BLUE, '#');
//		y += PLAYERSIZE;
//		put_pixel_block(curr, x, y, PLAYERCOLOR, 'X');
//	}
//	if (key == 34)
//	{
//		put_pixel_block(curr, x, y, BLUE, '#');
//		y -= PLAYERSIZE;
//		put_pixel_block(curr, x, y, PLAYERCOLOR, 'X');
//	}
//	return (0);
//}

int					main()
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_game			*game;
	
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, WINSIZE, WINSIZE, "tron");
	game = game_new(mlx_ptr, win_ptr);
	game_grid(game, 45, GREY);
	mlx_string_put(mlx_ptr, win_ptr, WINSIZE / 3, WINSIZE / 2, PLAYERCOLOR, "press ENTER to start");
	mlx_loop(mlx_ptr);
}
