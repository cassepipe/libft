#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size && dst[i])   // Length is either is size or the lenght of dest
		i++;
	i += ft_strlcpy(dst + i, src, size - i);
	return (i);
}

/*
// D | S | T | \0 |          S | R | C |   size = 3
// 0   1   2   3
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	size_t i = SIZE_MAX;//atoi(argv[1]);

	char dst[] = "dst\0garbage";
	char src[] = "src";

	i = -1;
	int a = ft_strlcat(dst, src, i);
	printf("mem : %s returns : %d\n", dst, a);

	return 0;
}
*/
