/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:33:47 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:49:16 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_makefinal(void)
{
	char	*final;

	final = malloc(sizeof(char) * 1);
	final[0] = '\0';
	return (final);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	begin;
	size_t	end;
	size_t	max_index;

	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin]) && s1[begin])
		begin++;
	if (s1[begin] == '\0')
		return (ft_makefinal());
	while (ft_strchr(set, s1[end]) && end > begin)
		end--;
	max_index = end - begin;
	final = malloc(sizeof(char) * (max_index + 2));
	if (!final)
		return (NULL);
	end = 0;
	while (end <= max_index)
		final[end++] = s1[begin++];
	final[end] = '\0';
	return (final);
}
/*
int	main()
{
	char *str = "uLucas Henriqueu";
	char *tirar = "u";
	char *here;
	here = ft_strtrim(str, tirar);
	printf("%s\n", str);
	printf("%s\n", here);
	return 0;
}*/
