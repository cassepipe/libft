/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:04:37 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/26 16:52:27 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (s < d)
	{
		i++;
		while (i <= len)
		{
			d[len - i] = s[len - i];
			i++;
		}
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
/*
#include  <unistd.h>
int main(void)
{

	char a[] = "Hello World !";

	ft_memmove(a + 2, a, 4);
	write(1, a, sizeof a);
	write(1, "\n",  1);

	char b[] = "Hello world !";

	ft_memcpy(b + 2, b, 4);
	write(1, b, sizeof b);
	write(1, "\n",  1);

	return 0;
}
*/
