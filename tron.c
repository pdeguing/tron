/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 17:29:05 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/10 18:54:27 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx/mlx.h"
#include "libft/libft.h"

typedef struct		s_param
{
	void			*mlx_ptr;
	void			*win_ptr;
}					t_param;

t_param				*param_new(void *mlx_ptr, void *win_ptr)
{
	t_param			*param;

	param = (t_param *)malloc(sizeof(t_param));
	if (!param)
		return (NULL);
	param->mlx_ptr = mlx_ptr;
	param->win_ptr = win_ptr;
	return (param);
}

int					deal_key(int key, void *param)
{
	ft_putnbr(key);
	ft_putchar('\n');
	mlx_pixel_put((t_param *)param->mlx_ptr, (t_param *)param->win_ptr, 50, 50, 0xFFFFFF);
	return (0);
}

int					main()
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_param			*param;
	int				i;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "tron");
	i = 0;
	while (i < 500)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, 250, i, 0xFFFFFF);
		i++;
	}
	param = param_new(mlx_ptr, win_ptr);
	mlx_key_hook(win_ptr, deal_key, param); 
	mlx_loop(mlx_ptr);
}
