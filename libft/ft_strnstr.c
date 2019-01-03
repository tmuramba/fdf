/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:39:52 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 19:57:06 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack && n)
	{
		if (needle[i] == *haystack)
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char *)(haystack - i + 1));
		haystack++;
		n--;
	}
	return (NULL);
}
