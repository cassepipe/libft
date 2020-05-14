#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*
int main (int argc, char **argv)
{
	ft_putstr_fd(argv[1], 1);
	ft_putstr_fd(argv[1], 2);

	return 0;
}
*/
