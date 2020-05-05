#include  "libft.h"

char *ft_strdup(const char *s)
{
	size_t i;
	char *duplicate;
	
	i = 0;
	duplicate = malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!duplicate)
		return (NULL);
	while (s[i])
		duplicate[i] = s[i];
	return duplicate;	
}
