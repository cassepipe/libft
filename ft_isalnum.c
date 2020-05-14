#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (1);
	if (ft_isalpha(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>
 int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (argv[1][1])
		return (0);

	printf("Is %c alphanum ? : %d", argv[1][0], ft_isalnum(argv[1][0]));

	return 0;
}
*/
