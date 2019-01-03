/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 23:34:52 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 19:59:15 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *new;

	new = dest;
	while (*new != '\0')
	{
		new++;
	}
	while (*src != '\0')
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (dest);
}
