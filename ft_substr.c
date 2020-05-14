#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	size_t	len;
	char	*duplicate;

	i = 0;
	len = 0;
	while (len < n && s[len])
		len++;
	duplicate = malloc(len + 1);
	if (!duplicate)
		return (NULL);
	while (i < len)
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	return (ft_strndup(s + start, len));
}

/*
#include <string.h>
#include <stdio.h>
 int main(int argc, char **argv)
{
	if (argc  != 3) return 1;
	char* dup;
	char* dup2;
	char* dup3;
	dup = ft_strndup(argv[1], atoi(argv[2]));
	dup2 = strndup(argv[1], atoi(argv[2]));
	printf("%s\n", dup);
	printf("%s\n", dup2);
	if (dup2[0] == '\0')
		printf("Empty string !");
	dup3 = ft_substr("Hello World!", atoi(argv[1]), atoi(argv[2]));
	printf("%s\n", dup3);
	return 0;
}
*/
