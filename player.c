/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 07:00:51 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/14 17:43:34 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

t_player		*player_new(t_object *object)
{
	t_player	*player;

	player = (t_player *)malloc(sizeof(t_player));
	if (!player)
		return (NULL);
	player->object = object;
	player->speed = 0;
	player->is_alive = 0;
	return (player);
}

void			player_init(t_player *player, int speed, int is_alive, int color)
{
	player->speed = speed;
	player->is_alive = is_alive;
	player->object->color = color;
}

int			player_move(t_player *player, t_game *game)
{
	 if (player->object->direction == 0)
	 {
		 player->object->y -= player->object->size - player->speed;
	 }
	 if (player->object->direction == 1)
	 {
		 player->object->x += player->object->size + player->speed;
	 }
	 if (player->object->direction == 2)
	 {
		 player->object->y += player->object->size + player->speed;
	 }
	 if (player->object->direction == 3)
	 {
		 player->object->x -= player->object->size - player->speed;
	 }
	 object_display(player->object, game);
	 return (0);
}

void			player_turn(t_player *player, int direction)
{
	player->object->direction = direction;
}

void			player_move_auto(t_player *player, t_game *game)
{
	mlx_loop_hook(game->mlx_ptr, player_move, player);
}
