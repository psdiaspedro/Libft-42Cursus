/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:49:06 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/06 20:43:53 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*min_int(int n)
{
	char	*result;
	int		i;

	i = 9;
	result = (char *)malloc(sizeof(char) * 12);
	if (result == NULL)
		return (NULL);
	result[11] = '\0';
	result[10] = '8';
	n = n / 10;
	n = -n;
	while (i > 0)
	{
		result[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	result[i] = '-';
	return (result);
}

static char	*negative(int n)
{
	char	*result;
	int		nb;
	int		i;

	n = -n;
	nb = n;
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	result = (char *)malloc(sizeof(char) * (i + 2));
	if (result == NULL)
		return (NULL);
	result[i + 1] = '\0';
	while (i > 0)
	{
		result[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	result[i] = '-';
	return (result);
}

static char	*positive(int n)
{
	char	*result;
	int		nb;
	int		i;

	nb = n;
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	result[i] = '\0';
	while (i > 0)
	{
		result[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (result);
}

static char	*if_null(void)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * 2);
	if (result == NULL)
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (min_int(n));
	if (n < 0)
		return (negative(n));
	if (n > 0)
		return (positive(n));
	return (if_null());
}
