/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:06:59 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/31 20:41:32 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*holder;

	while (*lst != NULL)
	{
		if (!*lst)
			return ;
		holder = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = holder;
	}
	*lst = 0;
}
