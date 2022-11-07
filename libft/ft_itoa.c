/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:26 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/07 12:14:21 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

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
	int	len;

	len = int_len(n);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	if (n < 0)
	{
		final[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		final[0] = '0';
	final[len] = '\0';
	while (n != 0)
	{
		len--;
		final[len] = (n % 10) + '0';
		n /= 10;
	}
	return (final);
}
/*
int	main()
{
	int	x = -2785;
	char	*a = ft_itoa(x);
	puts(a);
	return 0;
}*/
