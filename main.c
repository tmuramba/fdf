/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 02:21:32 by tmuramba          #+#    #+#             */
/*   Updated: 2018/08/10 09:18:26 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw(t_data fdf)
{
	t_a	pause;

	pause.start_x = fdf.prev_x;
	pause.start_y = fdf.prev_y;
	pause.end_x = fdf.cur_x;
	pause.end_y = fdf.cur_y;
	line(pause, fdf);
}

void	line(t_a a, t_data fdf)
{
	a.dx = abs(a.end_x - a.start_x);
	a.dy = abs(a.end_y - a.start_y);
	a.sx = a.start_x < a.end_x ? 1 : -1;
	a.sy = a.start_y < a.end_y ? 1 : -1;
	a.err = (a.dx > a.dy ? a.dx : -a.dy) / 2;
	while (1)
	{
		mlx_pixel_put(fdf.mlx, fdf.win, a.start_x, a.start_y, 0x00FF0000);
		if (a.start_x == a.end_x && a.start_y == a.end_y)
			break ;
		a.e2 = a.err;
		if (a.e2 > -a.dx)
		{
			a.err -= a.dy;
			a.start_x += a.sx;
		}
		if (a.e2 < a.dy)
		{
			a.err += a.dx;
			a.start_y += a.sy;
		}
	}
}

int		main(int argc, char **argv)
{
	t_data		fdf;

	if (argc == 2)
	{
		fdf.mlx = mlx_init();
		fdf.win = mlx_new_window(fdf.mlx, 1000, 1000, argv[1]);
		get_map(&fdf, argv[1]);
		fdf.space_x = 20;
		fdf.space_y = 10;
		fdf.start_x = 100;
		fdf.start_y = 500;
		fdf.height = 0;
		do_stuff(fdf);
		mlx_key_hook(fdf.win, &key_hooks, (t_data *)&fdf);
		mlx_loop(fdf.mlx);
	}
	return (0);
}
