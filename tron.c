/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 17:29:05 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 08:25:17 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

int					deal_key(int key, void *param)
{
	t_param			*curr;
	static int		x;
	static int		y;

	curr = (t_param *)param;
	ft_putnbr(key);
	ft_putchar('\n');
	x = 250;
	y = 250;
	mlx_pixel_put(curr->mlx_ptr, curr->win_ptr, x, y, BLUE);
	if (key == 38)
	{
		x--;
		mlx_pixel_put(curr->mlx_ptr, curr->win_ptr, x, y, BLUE);
	}
	if (key == 37)
	{
		x++;
		mlx_pixel_put(curr->mlx_ptr, curr->win_ptr, x, y, BLUE);
	}
	if (key == 40)
	{
		y++;
		mlx_pixel_put(curr->mlx_ptr, curr->win_ptr, x, y, BLUE);
	}
	if (key == 34)
	{
		y--;
		mlx_pixel_put(curr->mlx_ptr, curr->win_ptr, x, y, BLUE);
	}
	return (0);
}

int					main()
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_param			*param;
	int				x;
	int				y;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "tron");
	x = 0;
	y = 0;
	while (x < 500)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, x, 0, ORANGE);
		mlx_pixel_put(mlx_ptr, win_ptr, x, 499, ORANGE);
		x++;
	}
	while (y < 500)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, 0, y, ORANGE);
		mlx_pixel_put(mlx_ptr, win_ptr, 499, y, ORANGE);
		y++;
	}
	param = param_new(mlx_ptr, win_ptr);
	mlx_key_hook(win_ptr, deal_key, param); 
	mlx_loop(mlx_ptr);
}
