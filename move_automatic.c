/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_automatic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:35:38 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 15:32:42 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

void			move_automatic(t_param *param, int x, int y, int color, char c)
{
	while (y >= PLAYERSIZE)
	{
		put_pixel_block(param, x, y, color, '#');
		y -= PLAYERSIZE;
		put_pixel_block(param, x, y, PLAYERCOLOR, c);
	}
}
