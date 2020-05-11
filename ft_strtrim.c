#include "libft.h"

static int is_in_set(char c, char const *set)
{
	if(!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int y;
	int len;
	char *trimmed;

	i = 0;
	y = 0;
	len = 0;
	if (!s1)
		return NULL;
	while (is_in_set(s1[i], set))
	{
		i++;
		len++;
	}
	while (s1[len])
		len++;
	while (len - 1 >= 0 && is_in_set(s1[len - 1], set) && len != i)
		len--;
	if(!(trimmed = malloc(len - i + 1))) 
			return (NULL);
	while (i < len)
	{
		trimmed[y] = s1[i];
		i++;
		y++;
	}
	trimmed[y] = '\0';
	return (trimmed);
}

//char *ft_strrem(char const *s1, char const *set)
//{
//	size_t i;
//	size_t y;
//	size_t trimmed_len;
//	char *trimmed;
//
//	i = 0;
//	trimmed_len = 0;
//	while  (s1[i])
//	{
//		if (!_in_set(s1[i], set))
//			trimmed_len++;
//		i++;
//	}
//	if(!(trimmed = malloc(trimmed_len + 1)))
//		return (NULL);
//	i = 0;
//	y = 0;
//	while (s1[i])
//	{
//		if(!_in_set(s1[i], set)) 
//		{
//			trimmed[y] = s1[i];
//			y++;
//		}
//		i++;
//	}
//	trimmed[trimmed_len] = '\0';
//	return (trimmed);
//}
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	if (argc != 3) return 1;
//	printf("%s\n", ft_strtrim(argv[1], argv[2]));
//
//	return 0;
//}			
//
