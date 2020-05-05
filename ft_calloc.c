#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ret;

	ret = malloc(nmemb * size);
	ft_memset(ret, 0, size);
	return (ret);
}
