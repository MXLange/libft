/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:11:01 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:41:11 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest > src && dest - src < (int)n)
	{
		while (n != 0)
		{
			n--;
			p_dest[n] = p_src[n];
		}
		return (dest);
	}
	if (dest < src && src - dest < (int)n)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main () {
	char dest[] = "cavalo11111111111";
	const char src[]  = "ooooooooo";
	char dest2[] = "cavalo11111111111";
	const char src2[]  = "ooooooooo";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 4);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	printf("Before ft_memmove dest = %s, src = %s\n", dest2, src2);
	ft_memmove(dest2, src2, 4);
	printf("After ft_memmove dest = %s, src = %s\n", dest2, src2);
	return(0);
}*/
