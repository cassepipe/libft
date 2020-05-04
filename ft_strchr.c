#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
	unsigned char value;
	char * ptr;

	value = (unsigned char) c;
	ptr = (char *) s;
	while (*ptr)
	{
		if (*ptr == value)
			return ptr;
		ptr++;
	}
	if (!c)
		return ptr;
	else
		return NULL;
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3) return  1;
	int needle = argv[1][0];
	char *haystack = argv[2];
	
	printf("%s\n", ft_strchr(haystack, needle));

	char *ptr = ft_strchr(haystack, 0);

	printf("%p - %p = %ld \n", ptr, argv[2], (long)(ptr - argv[2]));
}
