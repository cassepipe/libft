#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size > 0)
	{		
		while(src[i])
		{
			if (i + 1 == size)
				break;
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

#include <unistd.h>
#include <stdio.h>
/*
 int main(int argc, char **argv)
{
	if (argc != 2) return 0;

	char buf[8] = "garbage";

	int a = ft_strlcpy(buf, argv[1], sizeof buf);

	if (a >= sizeof buf) 
		puts("Truncated\n");	
	else
		puts("Not truncated\n");

	write(1, buf, 8);
}	
*/
