/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 17:20:12 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 23:38:47 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = n;
	a = (char *)dst;
	b = (char *)src;
	if (a < b)
		return (ft_memcpy(a, b, n));
	if (n == 0 || a == b)
		return (a);
	while (i--)
		a[i] = b[i];
	return (a);
}
