/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 23:06:44 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 14:52:12 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (char *)(str + i);
		i++;
	}
	return (NULL);
}
