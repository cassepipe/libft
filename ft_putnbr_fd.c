#include "libft.h"

static long	ft_10powerof(long n)
{
	long result;

	result = 1;
	while (n--)
		result *= 10;
	return (result);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	long	digit;
	long	i;
	long	len;
	char	result[12];

	len = 1;
	nbr = n < 0 ? -1 * (long)n : n;
	i = nbr;
	while (i /= 10)
		len++;
	i = 0;
	if (n < 0)
		result[i++] = '-';
	while (--len >= 0)
	{
		digit = nbr / ft_10powerof(len);
		result[i++] = digit + '0';
		nbr = nbr - digit * ft_10powerof(len);
	}
	result[i] = '\0';
	write(fd, result, i);
}

/*
int main(int argc, char **argv)
{
	ft_putnbr_fd(atoi(argv[1]), 2);

	return 0;
}
*/
