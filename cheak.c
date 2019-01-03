/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 02:28:12 by tmuramba          #+#    #+#             */
/*   Updated: 2018/08/10 02:40:42 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	cheak(t_data fdf)
{
	if (fdf.map[y][x] != 0)
		fdf.cur_y = fdf.shift_y - fdf.map[y][x];
	else
		fdf.cur_y = fdf.shift_y;
	fdf.cur_x = fdf.shift_x;
	fdf.prev_x = fdf.cur_x;
	fdf.prev_y = fdf.cur_y;
}

void	cheak1(t_data fdf)
{
	int k;

	k = fdf.map[y][x - 1];
	if (fdf.map[y][x] != 0)
		fdf.cur_y = fdf.prev_y - fdf.map[y][x] - fdf.space_y + k;
	else
		fdf.cur_y = fdf.prev_y - fdf.space_y + k;
	fdf.cur_x = fdf.prev_x + fdf.space_x;
}
