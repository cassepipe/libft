#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char*) s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}



#include <string.h>
#include <stdio.h>

/*
 int main(void)
{
	char arr[] = "hello";

	ft_bzero(arr, 3);

	for (int i = 0; i < sizeof(arr); i++)
		printf("arr[%d] is null ? : %s\n", i, arr[i] ? "No" : "Yes");

	return 0;
}
		
*/
