/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 07:49:33 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 12:19:34 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TRON_H
# define TRON_H
# include "minilibx/mlx.h"
# include "libft/libft.h"
# define BLUE 0x00BFFF
# define ORANGE 0xFF7F00
# define CURRENT 0xFFFFFF
# define WINSIZE 700
# define PLAYERSIZE 5

typedef struct		s_param
{
	void			*mlx_ptr;
	void			*win_ptr;
	char			**matrix;
}					t_param;

t_param				*param_new(void *mlx_ptr, void *win_ptr, char **matrix);

void				print_matrix(char **matrix);
char				**create_matrix();
void				alterate_matrix(char **matrix, int x, int y, char c);

void				put_player(void *mlx_ptr, void *win_ptr, int x, int y, char **matrix);

#endif
