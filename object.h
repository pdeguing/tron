/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:24:37 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/13 12:03:34 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

typedef struct			s_object
{
	int					id;
	int					x;
	int					y;
	int					size;
	int					direction;
	int					color;
}						t_object;

t_object				*object_new(int id);
void					object_init(t_object *object, int x, int y, int size, int direction);
void					object_display(t_object *object, t_game *game);
void					object_place(t_object *object, t_game *game);
