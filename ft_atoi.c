#include "libft.h"

static int	ft_isspace(const char c)
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

int		ft_atoi(const char *nptr)
{
	long	result;
	size_t	i;
	size_t	neg;

	result = 0;
	i = 0;
	neg = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
		neg = ++i;
	while (ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (neg ? -result : result);
}

/*
#include <stdio.h>
 int main(int argc, char **argv)
{
	if (argc !=2) return 0;

	printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_atoi(argv[1]));

	return 0;
}
*/
