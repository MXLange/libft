/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:17:14 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:33:15 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main( void )
{
	char buffer[80] = "O mago estava calmo";
	char buffer2[80] = "O mago estava calmo";

	bzero(buffer, 5);
	ft_bzero(buffer2, 5);
	puts(buffer);
	puts(buffer2);
	return (0);
}*/
