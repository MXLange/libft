/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:01:40 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/11 19:14:21 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*
int main () {
	char str[50];
	char str2[50];

	strcpy(str,"This is string.h library function");
	puts(str);

	memset(str,'$',10);
	puts(str);

	strcpy(str2,"This is string.h library function");
	puts(str2);

	ft_memset(str2,'$',10);
	puts(str2);

   return(0);
}*/
