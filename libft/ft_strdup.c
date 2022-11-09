/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:36:45 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 13:30:16 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*final;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (i < len)
	{
		final[i] = s[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}
/*
int	main()
{
	char *a = "Mania de voce";
	char *b = ft_strdup(a);

	puts(a);
	puts(b);
	return 0;
}*/
