/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:32 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:50 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0 || n > 2147483647)
		return ;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n < 10)
	{
		ft_putchar_fd((n + 48), fd);
		return ;
	}
	ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd((n % 10 + 48), fd);
}

/*void	ft_putnbr_fd(int n, int fd)
{
	char	*x;

	if (fd < 0)
		return;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	x = ft_itoa(n);
	ft_putstr_fd(x, fd);
	free(x);
}*/
/*
int	main()
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	return 0;
}*/
