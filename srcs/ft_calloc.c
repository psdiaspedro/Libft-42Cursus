/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:04:27 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/07 15:08:32 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nbr);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * nbr);
	return (ptr);
}
