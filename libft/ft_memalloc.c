/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:04:50 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 14:51:18 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	str = malloc(size);
	if (str != '\0' && size != '\0')
	{
		ft_bzero((void *)str, size);
		return (str);
	}
	return (NULL);
}
