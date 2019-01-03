/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 22:21:50 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 14:52:37 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char *str2;
	int					i;

	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (n != '\0')
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
