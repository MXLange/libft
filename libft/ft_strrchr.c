/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:16:50 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:48:59 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	char *s = "aaaaacaaaaaaaa";
	char tofind = 'c';
	char *a = ft_strrchr(s, tofind);
	char *b = strrchr(s, tofind);

	printf("Endereço da memória que *a aponta: %p\n", a);
	printf("Conteúdo da memória: %c\n", *a);
	printf("Endereço da memória que *b aponta: %p\n", b);
	printf("Conteúdo da memória: %c\n", *b);
	return 0;
}*/
