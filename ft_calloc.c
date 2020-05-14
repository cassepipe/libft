#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (!(ret = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
