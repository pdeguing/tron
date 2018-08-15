/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tron.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 07:49:33 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/14 11:58:20 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TRON_H
# define TRON_H
# include "minilibx/mlx.h"
# include "libft/libft.h"
# define WHITE 0xFFFFFF
# define BLUE 0x00BFFF
# define ORANGE 0xFF7F00
# define GREY 0x202020
# define PLAYERCOLOR 0xFFFFFF
# define WINSIZE 700
# define PLAYERSIZE 5

typedef struct			s_object
{
	int					id;
	int					x;
	int					y;
	int					size;
	int					direction;
	int					color;
}						t_object;

typedef struct			s_player
{
	t_object			*object;
	int					speed;
	int					is_alive;
}						t_player;

typedef struct			s_game
{
	void				*mlx_ptr;
	void				*win_ptr;
	int					**matrix;
	t_player			*player[2];
}						t_game;

t_object				*object_new(int id);
void					object_init(t_object *object, int x, int y, int size, int direction);
void					object_display(t_object *object, t_game *game);
void					object_place(t_object *object, t_game *game);

t_player				*player_new(t_object *object);
void					player_init(t_player *player, int speed, int is_alive, int color);
int						player_move(t_player *player, t_game *game);
void					player_turn(t_player *player, int direction);
void					player_move_auto(t_player *player, t_game *game);

t_game 					*game_new(void *mlx_ptr, void *win_ptr);
void					game_grid(t_game *game, int spacing, int color);

int						matrix_new(t_game *game);
void					matrix_init(t_game *game);
void					matrix_del(t_game *game);

#endif
