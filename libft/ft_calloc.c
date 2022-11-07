/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:29:30 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/07 13:34:58 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	unsigned int	total;
	size_t	i;

	i = 0;
	total = nmemb * size;
	result = malloc(total);
	if(!result || nmemb == 0 || size == 0)
		return (NULL);
	ft_bzero(result, nmemb);
	return (result);
}
/*
int	main()
{
	int	n = 5;
	int	i = 0;
	char *a = "olas";

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
