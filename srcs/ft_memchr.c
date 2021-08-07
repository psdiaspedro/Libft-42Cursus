/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:14:09 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/07 15:11:47 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	x;
	char	*pointer;

	i = 0;
	x = (char)c;
	pointer = (char *)str;
	while (i < n)
	{
		if (pointer[i] == x)
			return (&pointer[i]);
		i++;
	}
	pointer = NULL;
	return (pointer);
}
