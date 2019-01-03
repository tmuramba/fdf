/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_end_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 23:27:49 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/19 00:05:37 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_end_of_line(char **save_buff, char **line)
{
	char	*limit;

	if ((limit = ft_strchr(*save_buff, '\n')))
	{
		*line = ft_strsub(*save_buff, 0, limit - *save_buff);
		ft_strcpy(*save_buff, limit + 1);
		return (1);
	}
	return (0);
}
