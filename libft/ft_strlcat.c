
#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = ft_strlen(dest);
	j = dlen;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main (void)
{
	char src[] = "Born";
	char dest [] = "133742";

	printf("%i \n", ft_strlcat(dest, src, 7));
	printf("%s \n", dest);
}
