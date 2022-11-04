/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:11:35 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/04 16:28:22 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
	{
		j++;
	}
	j++;
	return(j);
}
/*
int	main()
{
	char src[] = "Macaco";
	char dest1[] = "Passaro";

	printf("%d\n", ft_strlcpy(dest1, src, 2));
	printf("%s\n", dest1);
}*/
