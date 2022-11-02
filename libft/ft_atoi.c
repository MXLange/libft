/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:49:56 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/02 14:16:43 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//
int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	number;

	i = 0;
	signal = 1;
	number = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		number = (number * 10) + (nptr[i] - 48);
		i++;
	}
	return (number * signal);
}
/*int	main()
{
	char a[] = "  +1234f5678";
	int x = atoi(a);
	int y = ft_atoi(a);
	printf("atoi: %i\n", x);
	printf("ft_atoi: %i\n", y);
	return (0);
}*/
