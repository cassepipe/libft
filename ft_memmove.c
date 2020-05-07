#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;
	unsigned char tmp[n];

	i = 0;
	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;	
	}
	return (dest);
}



#include  <unistd.h>

/*
 int main(void)
{

	char a[] = "Hello World !";

	ft_memmove(a + 2, a, 4);
	write(1, a, sizeof a);
	write(1, "\n",  1);

	char b[] = "Hello world !";

	ft_memcpy(b + 2, b, 4);
	write(1, b, sizeof b);
	write(1, "\n",  1);
	
	return 0;
}
		


*/
