/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:04:37 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/14 17:06:04 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*data;
	unsigned char	value;

	i = 0;
	data = (unsigned char*)s;
	value = (unsigned char)c;
	while (i < n && data[i] != value)
		i++;
	return (i == n ? NULL : data + i);
}

/*
#include <unistd.h>
int main(void)
{
	char arr[] = "hello world\n";
	char* p;

	p = ft_memchr(arr, 'w', 0);
	if (!p) write(1, "NULL !\n", 7);
	p = ft_memchr(arr, 'w', sizeof arr);
	write(1, p, 6);

	return 0;
}
*/
