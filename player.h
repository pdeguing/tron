/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 07:01:22 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/14 10:53:18 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

typedef struct		s_player
{
	t_object		*object;
	int				speed;
	int				is_alive;
}					t_player;

t_player			*player_new(t_object *object);
void				player_init(t_player *player, int speed, int is_alive, int color);
int					player_move(t_player *player);
void				player_turn(t_player *player, int direction);
void				player_move_auto(t_player *player, t_game *game);
