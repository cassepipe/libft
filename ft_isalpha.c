int ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

#include <stdio.h>
/*
 int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (argv[1][1])
		return (0);

	printf("Is %c alpha ? : %d", argv[1][0], ft_isalpha(argv[1][0]));

	return 0;
}
*/
