/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:58:56 by tmuramba          #+#    #+#             */
/*   Updated: 2018/06/05 20:11:09 by tmuramba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (*s)
	{
		str[i] = (*f)(*s);
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
