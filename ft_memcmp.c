#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char * p1;
	unsigned char * p2;
	size_t i;

	p1 = (unsigned char*) s1;
	p2 = (unsigned char*) s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

/*
 int main(int argc, char** argv)
{
	char* a1 = argv[1];
	char* a2 = argv[2];
	
	printf("Result : %d\n", ft_memcmp(a1, a2, 0));
	printf("Result : %d\n", ft_memcmp(a1, a2, 4));
	
	return 0;
}
*/
