/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:29:30 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/04 17:36:31 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;
	unsigned int	total;
	size_t	i;

	i = 0;
	total = nmemb * size;
	result = malloc(total);
	if(!result || nmemb == 0 || size == 0)
		return (NULL);
	while (i < total)
		result[i++] = 0;
	return ((void *)result);
}
/*
int	main()
{
	int	n = 5;
	int	i = 0;
	char	*a = ft_calloc(n, sizeof(char));
	while (i < n)
	{
		printf("%p\n", &a[i]);
		i++;
	}
	free(a);
	return (0);
}*/
