#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + '0';
	return (c);
}
