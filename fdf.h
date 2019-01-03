/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:54:53 by tmuramba          #+#    #+#             */
/*   Updated: 2018/08/10 09:17:24 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FDF_H
#	define FDF_H
#include <stdlib.h>
#include <unistd.h>
#include "./libft/libft.h"
#include <mlx.h>
#include <math.h>
#include "get_next_line.h"

typedef struct		s_data
{
	int				**map;
	void			*mlx;
	int				len;
	char			**char_map;
	int				colmn;
	void			*win;
	int				z;
	int				y;
	int				start_x;
	int				start_y;
	int				max_y;
	int				max_x;
	int				max_z;
	int				cur_y;
	int				cur_x;
	int				space_x;
	int				space_y;
	int				prev_y;
	int				prev_x;
	int				shift_x;
	int				shift_y;
	int				height;
}					t_data;

typedef struct		s_pos
{
	void			*mlx;
	void			*win;
	int				dx;
	int				dy;
	int				sx;
	int				e2;
	int				sy;
	int				err;
	int				start_x;
	int				start_y;
	int				end_y;
	int				end_x;
}					t_a;

void				get_map(t_data *fdf, char *str);
void				get_info(t_data *mlx);
int					key_hooks(int key, t_data *fdf);
void				do_stuff(t_data fdf);
void				draw_y(t_data fdf);
void				draw_x(t_data fdf);
void				line(t_a a, t_data fdf);
void				ft_draw(t_data fdf);
void				cheak(t_data fdf);
void				cheak1(t_data fdf);

#	endif
