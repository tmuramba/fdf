/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:53:31 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/19 00:03:35 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8

# include <fcntl.h>

int		get_next_line(int const fd, char **line);
char	*ft_strjoin_2(char *s1, char *s2);
int		ft_end_of_line(char **save_buff, char **line);

#endif
