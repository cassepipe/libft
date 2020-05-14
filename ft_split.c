#include "libft.h"

static const char	*next_sep(const char *str, char sep)
{
	while (*str && *str != sep)
		str++;
	return (str);
}

static const char	*next_word(const char *str, char sep)
{
	while (*str && *str == sep)
		str++;
	return (str);
}

static char		*ft_strndup(const char *s, size_t n)
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

static char		**diralloc(const char *s, char c)
{
	size_t	size;

	if (!s)
		return (NULL);
	size = 1;
	s = next_word(s, c);
	while (*s)
	{
		s = next_sep(s, c);
		s = next_word(s, c);
		size++;
	}
	return (malloc(size * sizeof(char*)));
}

char		**ft_split(char const *s, char c)
{
	char		**dir;
	const char	*follower;
	long		i;

	if (!(dir = diralloc(s, c)))
		return (NULL);
	s = next_word(s, c);
	follower = s;
	i = 0;
	while (*s)
	{
		s = next_sep(s, c);
		if (!(dir[i++] = ft_strndup(follower, s - follower)))
		{
			while (--i >= 0)
				free(dir[i]);
			return (NULL);
		}
		s = next_word(s, c);
		follower = s;
	}
	dir[i] = NULL;
	return (dir);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3) return 1;

	char **dir = ft_split(argv[1], argv[2][0]);

	for(int i = 0; dir[i]; i++)
		printf("%s\n", dir[i]);

	return 0;
}
*/
