/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:53:37 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/07 12:23:50 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char x;

	x = (unsigned char)c;
	if (c >= 65 && c <= 90)
	{
		x = x + 32;
		c = (int)x;
	}
	return (c);
}
