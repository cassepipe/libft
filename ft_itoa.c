#include "libft.h"

static long ft_10powerof(long n)
{
	long result;
	result = 1;
	while(n--)
		result *= 10;
	return result;
}

char *ft_itoa(int n)
{
	long nbr;
	long digit;
	long i;
	long len;
	char *result;

	len = 1;
	nbr = n < 0 ? -1 * (long) n : n;
	i = nbr;
	while (i /= 10)
		len++;
	if(!(result = malloc((len + 1) * sizeof(char))))
		return (NULL);
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
	return (result);
}

//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	if (argc != 2) return 1;
//
//	int n = atoi(argv[1]);
//	char *result = ft_itoa(n);
//
//	printf("%s\n", result);
//
//	return 0;
//}
