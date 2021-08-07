/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:25:36 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/06 13:39:37 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	x;

	ptr = (char *)s;
	x = (char)c;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == x)
			return (&ptr[i]);
		i--;
	}
	ptr = NULL;
	return (ptr);
}
