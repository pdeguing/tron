/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 17:29:05 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/14 17:43:33 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

int					deal_key(int key, void *param)
{
	static int		start = 0;
	t_game			*game;

	game = (t_game *)param;	
	ft_putnbr(key);
	if (start == 0 && key == 36)
	{
		mlx_clear_window(game->mlx_ptr, game->win_ptr);
		game_grid(game, WINSIZE / 20, GREY);
		player_move_auto(game->player[0], game);
		start = 1;
	}
	if (key == 38)
	{
		player_turn(game->player[0], 3);
	}
	if (key == 37)
	{
		player_turn(game->player[0], 1);
	}
	if (key == 40)
	{
		player_turn(game->player[0], 2);
	}
	if (key == 34)
	{
		player_turn(game->player[0], 0);
	}
	return (0);
}

int					main()
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_game			*game;
	t_object		*object;
	
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, WINSIZE, WINSIZE, "tron");
	game = game_new(mlx_ptr, win_ptr);
	object = object_new(0);
	object_init(object, (WINSIZE / 2) - (PLAYERSIZE / 2) - 1, WINSIZE / 2, PLAYERSIZE, 0);
	game->player[0] = player_new(object);
	player_init(game->player[0], 0, 1, BLUE);
	mlx_string_put(mlx_ptr, win_ptr, WINSIZE / 3, WINSIZE / 2, PLAYERCOLOR, "press ENTER to start");
	mlx_key_hook(win_ptr, deal_key, game);
	mlx_loop(mlx_ptr);
}
