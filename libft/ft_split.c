/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:33:12 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 17:22:41 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ccount(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			count++;
	}
	return (count);
}

static size_t	get_size(const char *s, size_t *pos, char c)
{
	size_t	i;

	i = *pos;
	while (s[*pos] != '\0' && s[*pos] != c)
		*pos += 1;
	i = *pos - i;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	pos;
	size_t	act_pos;
	size_t	i;
	size_t	final_size;

	final_size = ccount(s, c);
	final = malloc(sizeof(char *) * (final_size + 1));
	if (!final)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < (final_size))
	{
		while (s[pos] != '\0' && s[pos] == c)
			pos++;
		act_pos = pos;
		final[i] = ft_substr(s, act_pos, get_size(s, &pos, c));
		i++;
	}
	final[i] = NULL;
	return (final);
}
/*
int	main()
{
	char	*tosplit = "a   eita   n-+96 ois   ";
	char	sep = ' ';
	char	**result = ft_split(tosplit, sep);
	size_t	i = 0;

	while (result[i])
	{
		puts(result[i]);
		i++;
	}
	return (0);
}*/
