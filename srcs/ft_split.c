/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:17:52 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/07 17:29:28 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_counter(char const *str, char c)
{
	int		i;
	int		indicator;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		indicator = 0;
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			indicator = 1;
			i++;
		}
		while (str[i] == c && str[i] != '\0')
			i++;
		if (indicator == 1)
			words++;
	}
	return (words);
}

static int	new_str_size(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i] == c && str[i] != '\0')
		str++;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static char	**mk_split(char **ptr, char const *s, char c, int words)
{
	char	*new_str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < words)
	{
		new_str = (char *)malloc(sizeof(char) * (new_str_size(s, c) + 1));
		if (new_str == NULL)
			return (NULL);
		while (s[0] == c && s[0] != '\0')
			s++;
		while (s[0] != c && s[0] != '\0')
			new_str[j++] = *s++;
		new_str[j] = '\0';
		ptr[i++] = new_str;
		j = 0;
	}
	ptr[words] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**ptr;

	if (s == NULL)
		return (NULL);
	words = ft_words_counter(s, c);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);
	ptr = mk_split(ptr, s, c, words);
	return (ptr);
}
