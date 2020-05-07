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
