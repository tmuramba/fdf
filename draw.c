/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:36:55 by tmuramba          #+#    #+#             */
/*   Updated: 2018/08/10 09:26:34 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_y(t_data fdf)
{
	int x;
	int y;

	x = 0;
	while (x < fdf.max_x)
	{
		y = 0;
		while (y < fdf.max_y)
		{
			fdf.cur_y = fdf.shift_y + (y * fdf.space_y) - fdf.map[y][x];
			fdf.cur_x = fdf.shift_x + (y * fdf.space_x);
			if (y == 0)
			{
				fdf.prev_y = fdf.cur_y;
				fdf.prev_x = fdf.cur_x;
			}
			ft_draw(fdf);
			fdf.prev_y = fdf.cur_y;
			fdf.prev_x = fdf.cur_x;
			y++;
		}
		fdf.shift_x += fdf.space_x;
		fdf.shift_y -= fdf.space_y;
		x++;
	}
}

void	draw_x(t_data fdf)
{
	int x;
	int y;

	y = 0;
	while (y < fdf.max_y)
	{
		x = 0;
		while (x < fdf.max_x)
		{
			fdf.cur_y = fdf.shift_y - (x * fdf.space_y) - fdf.map[y][x];
			fdf.cur_x = fdf.shift_x + (x * fdf.space_x);
			if (x == 0)
			{
				fdf.prev_x = fdf.cur_x;
				fdf.prev_y = fdf.cur_y;
			}
			ft_draw(fdf);
			fdf.prev_x = fdf.cur_x;
			fdf.prev_y = fdf.cur_y;
			x++;
		}
		fdf.shift_x += fdf.space_x;
		fdf.shift_y += fdf.space_y;
		y++;
	}
}

void	do_stuff(t_data fdf)
{
	fdf.shift_x = fdf.start_x;
	fdf.shift_y = fdf.start_y;
	draw_y(fdf);
	fdf.shift_x = fdf.start_x;
	fdf.shift_y = fdf.start_y;
	draw_x(fdf);
}
