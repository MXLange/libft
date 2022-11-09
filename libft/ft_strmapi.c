/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:16:23 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:20:44 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*final;
	size_t	i;

	final = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !f || !final)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
/*
char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	if (str == '.')
		return (str);
	return (str - 32);
}

int main()
{
	char *str = "hello.";
	puts(str);
	char *result = ft_strmapi(str, my_func);
	puts(result);
	return (0);
}*/
