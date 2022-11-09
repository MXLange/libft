/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:15:18 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:43:51 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void my_func(unsigned int i, char *c)
{
	printf("My inner function: index = %d and %c\n", i, *c);
	if (ft_isalpha(*c))
		*c = ft_toupper(*c);
}

int main()
{
	char str[] = "hello.";
	puts(str);
	ft_striteri(str, my_func);
	puts(str);
	return (0);
}*/
