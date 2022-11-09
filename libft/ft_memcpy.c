/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:34:57 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:40:06 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	size_t n = 5;
	char src[100] = "12345";
	char dest[100] = "12345";

	char src2[100] = "12345";
	char dest2[100] = "12345";

	char *a = memcpy(dest, src, n);
	char *b = ft_memcpy(dest2, src2, n);

	puts(a);
	puts(b);
	return 0;
}*/
