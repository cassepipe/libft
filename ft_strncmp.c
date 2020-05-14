#include "libft.h"

int	ft_strncmp(const char *l, const char *r, size_t n)
{
	size_t		i;
	int		diff;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	diff = 0;
	s1 = (unsigned char*)l;
	s2 = (unsigned char*)r;
	while (i < n)
	{
		if ((diff = s1[i] - s2[i]))
			return (diff);
		if (!s1[i] || !s2[i])
			return (diff);
		i++;
	}
	return (diff);
}

/*
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	char* a1 = argv[1];
	char* a2 = argv[2];


	printf("string.h output :\n");
	printf("Result : %d\n",strncmp(a1, a2, 0));
	printf("Result : %d\n",strncmp(a1, a2, 1));
	printf("Result : %d\n",strncmp(a1, a2, 2));
	printf("Result : %d\n",strncmp(a1, a2, 3));
	printf("Result : %d\n",strncmp(a1, a2, 4));

	printf("My output :\n");
	printf("Result : %d\n",ft_strncmp(a1, a2, 0));
	printf("Result : %d\n",ft_strncmp(a1, a2, 1));
	printf("Result : %d\n",ft_strncmp(a1, a2, 2));
	printf("Result : %d\n",ft_strncmp(a1, a2, 3));
	printf("Result : %d\n",ft_strncmp(a1, a2, 4));
	return 0;
}
*/
