/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 23:34:37 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/07 17:31:30 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *)malloc(len + 1);
	if (!s || !ptr)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		ptr[j++] = s[i++];
	ptr[j] = '\0';
	return (ptr);
}
