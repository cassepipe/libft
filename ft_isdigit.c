int ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

#include <stdio.h>
int main(void)
{
	int i = 48;
	int y = ':';

	printf("%c is a digit : %d\n", i, isdigit(i));
	printf("%c is a digit : %d\n", y, isdigit(y));
}
