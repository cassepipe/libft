#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	value;
	char			*ptr;
	char			*last_encounter;

	value = (unsigned char)c;
	ptr = (char *)s;
	last_encounter = NULL;
	while (*ptr)
	{
		if (*ptr == value)
			last_encounter = ptr;
		ptr++;
	}
	if (!value)
		return (ptr);
	return (last_encounter);
}
