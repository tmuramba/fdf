/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:52:23 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/18 23:57:43 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int			bytes_read;
	char		buff[BUFF_SIZE + 1];
	static char	*save_buff = NULL;

	if (save_buff && ft_end_of_line(&save_buff, line))
		return (1);
	while ((bytes_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bytes_read] = '\0';
		save_buff = ft_strjoin_2(save_buff, buff);
		if (ft_end_of_line(&save_buff, line))
			return (1);
	}
	if (bytes_read < 0)
		return (-1);
	if (save_buff && *save_buff)
	{
		*line = ft_strdup(save_buff);
		ft_strdel(&save_buff);
		return (1);
	}
	if (bytes_read)
		return (1);
	return (0);
}
