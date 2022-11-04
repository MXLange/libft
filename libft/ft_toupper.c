
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main()
{
	char a = 'u';
	char b = 'u';
	int x = ft_toupper(a);
	int y = toupper(b);

	printf("%i\n", x);
	printf("%i\n", y);
	return 0;
}
