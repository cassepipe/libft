/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:04:37 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/26 14:29:25 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*duplicate;

	i = 0;
	duplicate = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!duplicate)
		return (NULL);
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

/*
char *ft_strdup(const char *s)
{
	size_t len;
	char *ptr;

	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (!ptr)
		return NULL;
	return ft_memcpy(ptr, s, len + 1);
}
*/
