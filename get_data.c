/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:53:44 by tmuramba          #+#    #+#             */
/*   Updated: 2018/08/10 08:37:02 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	get_info(t_data *fdf)
{
	int		x;
	int		y;
	char	**ret;

	x = 0;
	y = -1;
	ret = ft_strsplit(fdf->char_map[0], ' ');
	while (ret[x] != NULL)
		x++;
	fdf->max_x = x;
	x--;
	while (x >= 0)
		free(ret[x--]);
	fdf->map = (int **)malloc(sizeof(int *) * fdf->max_y);
	while (++y < fdf->max_y)
	{
		x = -1;
		ret = ft_strsplit(fdf->char_map[y], ' ');
		fdf->map[y] = (int *)malloc(sizeof(int) * fdf->max_x);
		while (++x < fdf->max_x)
			fdf->map[y][x] = ft_atoi(ret[x]);
		while (x >= 0)
			free(ret[x--]);
	}
}

void	get_map(t_data *fdf, char *str)
{
	int		fd;
	char	*temp;
	int		y;

	y = 0;
	fdf->char_map = (char **)malloc(sizeof(char *) * 1024);
	fd = open(str, O_RDONLY);
	while (get_next_line(fd, &temp) > 0)
	{
		fdf->char_map[y] = ft_strdup(temp);
		y++;
		free(temp);
	}
	close(fd);
	fdf->max_y = y;
	get_info(fdf);
}
