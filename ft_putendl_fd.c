#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

/*
int main (int argc, char **argv)
{
	ft_putendl_fd(argv[1], 1);
	ft_putendl_fd(argv[1], 2);

	return 0;
}
*/
