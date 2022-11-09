/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:33:27 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:20:22 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_count;
	size_t	s2_count;
	size_t	final_len;
	char	*final;

	final_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	final = malloc(sizeof(char) * (final_len));
	if (!final)
		return (NULL);
	s1_count = 0;
	s2_count = 0;
	while (s1[s1_count])
	{
		final[s1_count] = s1[s1_count];
		s1_count++;
	}
	while (s2[s2_count])
		final[s1_count++] = s2[s2_count++];
	final[s1_count] = '\0';
	return (final);
}
/*
int	main()
{
	char *a = "Vinho tinto";
	char *b = "do Porto.";
	char *concat = ft_strjoin(a, b);
	printf("A: %s + B: %s =\n", a, b);
	printf("%s\n", concat);
	return (0);
}*/
