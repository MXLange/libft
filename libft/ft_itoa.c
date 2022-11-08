/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mu <mu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:26 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/08 12:06:27 by mu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*final;
	size_t	len;

	len = int_len(n);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	final[len] = '\0';
	len--;
	if (n < 0)
		final[0] = '-';
	else if (n == 0)
		final[0] = '0';
	while (n != 0)
	{
		final[len] = absolute_value(n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (final);
}
/*
int	main()
{
	int	x = -2147483648;
	char	*a = ft_itoa(x);
	puts(a);
	return 0;
}*/
