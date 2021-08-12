/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:55:50 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/12 11:36:17 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if ((char)c == '\0')
	{
		i = ft_strlen(((char *)s);
		return ((char *)s + i);
	}
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)s + 1);
		i++;
	}
	return (0);
}
