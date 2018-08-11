/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 07:49:33 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 08:16:13 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TRON_H
# define TRON_H
# include "minilibx/mlx.h"
# include "libft/libft.h"
# define BLUE 0x00BFFF
# define ORANGE 0xFF7F00

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

#endif
