

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

int	main()
{
	char *s = "aaaaaaacaaaaaa";
	char *a = ft_strchr(s, 'c');
	char *b = strchr(s, 'c');
	unsigned int	a_a = (unsigned int) a;
	unsigned int	b_b = (unsigned int) b;

	printf("Endereço da memória que *a aponta: %x\n", a_a);
	printf("Conteúdo da memória: %c\n", *a);
	printf("Endereço da memória que *b aponta: %x\n", b_b);
	printf("Conteúdo da memória: %c\n", *b);
	return 0;
}
