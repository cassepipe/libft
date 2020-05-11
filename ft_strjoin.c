#include "libft.h"

//static char *ft_strcpy(char *dst, const char *src)
//{	
//	while (*src)
//	{
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	return (dst);
//}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	char *joined;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if(!(joined = malloc(len + 1)))
		return (NULL);
	ft_strlcpy(joined, s1, len + 1);
	ft_strlcat(joined, s2, len + 1);

	return (joined);
}

//int main(int argc, char **argv)
//{
//	if (argc != 3) return 1;
//
//	printf("%s\n", ft_strjoin(argv[1], argv[2]));
//
//	return 0;
//}
