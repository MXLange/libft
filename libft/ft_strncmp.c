/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:43:56 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:20:47 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0'
		&& s2[i] != '\0')
		i++;
	if (n == 0 || n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void) {

	char str1[] = "Casilo", str2[] = "Camila";
	int nbr = 6;
	printf("Result: %d\n", ft_strncmp(str1, str2, nbr));
	printf("Expected outcome: %d \n", strncmp(str1, str2, nbr));
}*/
