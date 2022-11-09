/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:11:52 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:21:12 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main()
{
	char a = 'U';
	char b = 'U';
	int x = ft_tolower(a);
	int y = tolower(b);

	printf("%i\n", x);
	printf("%i\n", y);
	return 0;
}*/
