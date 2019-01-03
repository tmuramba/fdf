/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:25:56 by tmuramba          #+#    #+#             */
/*   Updated: 2018/08/10 09:28:01 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	key_hooks(int key, t_data *fdf)
{
	if (key == 53)
		exit(0);
	if (key == 123)
		fdf->start_x -= 10;
	else if (key == 124)
		fdf->start_x += 10;
	else if (key == 125)
		fdf->start_y += 10;
	else if (key == 126)
		fdf->start_y -= 10;
	else if (key == 6)
	{
		fdf->space_x += 2;
		fdf->space_y += 1;
	}
	else if (key == 7)
	{
		fdf->space_x -= 2;
		fdf->space_y -= 1;
	}
	mlx_clear_window(fdf->mlx, fdf->win);
	do_stuff(*fdf);
	return (0);
}
