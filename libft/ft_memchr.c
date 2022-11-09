/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:07:36 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:39:09 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return (ptr_s + i);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	const char str[] = "a/aaaaaaaaaaaaaaaaaaaaaaaa";
	const char ch = '/';
	char *ret;

	ret = ft_memchr(str, ch, 6);
	printf("%s \n", ret);
	printf("%s", str);
	return(0);
}*/
