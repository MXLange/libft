
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *p_src;
	unsigned char *p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;

	if (dest > src && dest-src < (int)n)
	{
		while (n != 0)
		{
			n--;
			p_dest[n] = p_src[n];
		}
		return (dest);
	}
	if (dest < src && src-dest < (int)n)
	{
		i = 0;
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

int main () {
	char dest[] = "oldstr";
	const char src[]  = "newstring";
	char dest2[] = "oldstr";
	const char src2[]  = "newstring";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	//memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	printf("Before ft_memmove dest = %s, src = %s\n", dest2, src2);
	ft_memmove(dest2, src2, 9);
	printf("After ft_memmove dest = %s, src = %s\n", dest2, src2);
	return(0);
}
