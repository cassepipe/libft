#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' '
	|| c == '\t'
	|| c == '\v'
	|| c == '\n'
	|| c == '\f'
	|| c == '\r')
		return (1);
	return (0);
}
