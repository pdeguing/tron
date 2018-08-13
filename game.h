/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:31:15 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 10:50:15 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

typedef struct		s_game
{
	void			*mlx_ptr;
	void			*win_ptr;
	int				**matrix;
}					t_game;

t_game 				*game_new(void *mlx_ptr, void *win_ptr);
void				game_grid(t_game *game, int spacing, int color);
