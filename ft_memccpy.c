#include "libft.h"
#include <stdlib.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	unsigned char value;

	i = 0;
	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	value = (unsigned char) c;
	while (i < n)
	{	
		d[i] = s[i];
		if (s[i] == value)
			break;
		i++;
	}
	return (i == n ? NULL : (dest + i + 1));
}

#include  <unistd.h>
/*
 int main(void)
{
	char arr[] = "Hel12lo";

	
	ft_memccpy(arr, "World", 'l', sizeof arr);
	write(1, arr, sizeof arr);
	write(1, "\n",  1);

	ft_memccpy(arr, "World", 306, sizeof arr);
	write(1, arr, sizeof arr);
	write(1, "\n",  1);

	return 0;
}
		





*/
