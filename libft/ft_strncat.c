/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 00:04:48 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 23:53:44 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	x;

	x = 0;
	i = ft_strlen(dest);
	while (src[x] != '\0' && x < n)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
