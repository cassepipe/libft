#include "libft.h" 

char *ft_strrchr(const char *s, int c)
{
	unsigned char value;
	char * ptr;

	value = (unsigned char) c;
	ptr = (char *) s;
	char *last_encounter;

	last_encounter = NULL;
	while (*ptr)
	{
		if (*ptr == value)
			last_encounter = ptr;
		ptr++;
	}
	if (!value)
		return ptr;
	return last_encounter;
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3) return  1;
	int needle = argv[1][0];
	char *haystack = argv[2];
	
	printf("%s\n", ft_strrchr(haystack, needle));

	char *ptr = ft_strrchr(haystack, 0);

	printf("%p - %p = %ld \n", ptr, argv[2], (long)(ptr - argv[2]));

	/*
	 * The fact that many implementations print a string such as (null) when passed a null pointer is a kindness that is dangerous to rely upon. The beauty of undefined behaviour is that such a response is permitted, but it is not required. Similarly, a crash is permitted, but not required (more's the pity – people get bitten if they work on a forgiving system and then port to other less forgiving systems)
	 */
}
