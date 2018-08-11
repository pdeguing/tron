/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:29:03 by pdeguing          #+#    #+#             */
/*   Updated: 2018/08/11 11:35:13 by pdeguing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tron.h"

t_param				*param_new(void *mlx_ptr, void *win_ptr, char **matrix)
{
	t_param			*param;

	param = (t_param *)malloc(sizeof(t_param));
	if (!param)
		return (NULL);
	param->mlx_ptr = mlx_ptr;
	param->win_ptr = win_ptr;
	param->matrix = matrix;
	return (param);
}
