/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:04:37 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/24 17:35:54 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	p = (unsigned char*)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}

/*
#include  <unistd.h>
#include <string.h>

int	main(void)
{
	char arr[10];

	ft_memset(arr, 48, 10);
	write(1, arr, 10);
	write(1, "\n",  1);

	ft_memset(arr, 49, 5);
	write(1, arr, 10);
	write(1, "\n",  1);

	ft_memset(arr, 306, 1); // 306 - 256 = 50 --> '2'
	write(1, arr, 10);
	write(1, "\n",  1);

	memset(arr, 306, 3);
	write(1, arr, 10);
	write(1, "\n",  1);

	return 0;
}
*/
