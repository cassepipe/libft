#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char*) dest;
	s = (unsigned char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);	
}

#include  <unistd.h>
#include <string.h>

/*
 int main(void)
{

	char arr[] = "Hello";

	ft_memcpy(arr, "World", 3);
	write(1, arr, sizeof arr);
	write(1, "\n",  1);

	return 0;
}
		
*/
