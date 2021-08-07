/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:42:03 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/07 12:25:02 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char x;

	x = (unsigned char)c;
	if (c >= 97 && c <= 122)
	{
		x = x - 32;
		c = (int)x;
	}
	return (c);
}
