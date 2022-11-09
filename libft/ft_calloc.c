/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:29:30 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 13:29:40 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*final;
	size_t	total;
	size_t	i;

	total = size * nmemb;
	final = malloc(total);
	if (final == NULL)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		final[i] = 0;
		i++;
		total--;
	}
	return ((void *)final);
}
/*
int	main()
{
	int	n = 5;
	int	i = 0;
	char *a = "olaa";

	while (i < n)
	{
		printf("%p\n", &a[i]);
		i++;
	}
	a = ft_calloc(n, sizeof(char));
	i = 0;
	while (i < n)
	{
		printf("%p\n", &a[i]);
		i++;
	}
	free(a);
	return (0);
}*/
