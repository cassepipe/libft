#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int diff;

	i = 0;
	while (i < n)
	{
		if ((diff = s1[i] - s2[i]))
		       return diff;	
		if (!s1[i] || !s2[i])
			return diff;
		i++;
	}
	return diff;
}

#include <string.h>
#include <stdio.h>

/*
 int main(int argc, char** argv)
{
	char* a1 = argv[1];
	char* a2 = argv[2];
	
	printf("Result : %d\n",ft_strncmp(a1, a2, 2));
	printf("Result : %d\n",ft_strncmp(a1, a2, 4));
	
	return 0;
}

*/
