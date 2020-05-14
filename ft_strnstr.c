#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!*little)
		return (char *)big;
	while (i < len && big[i])
	{
		if (big[i] == little[y])
		{
			while (i + y < len && big[i + y] == little[y])
			{
				if (!little[y + 1])
					return ((char*)big + i);
				y++;
			}
			y = 0;
		}
		i++;
	}
	return (NULL);
}
