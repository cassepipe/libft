/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:04:37 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/14 17:06:12 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size && dst[i])
		i++;
	i += ft_strlcpy(dst + i, src, size - i);
	return (i);
}

/*
// D | S | T | \0 |          S | R | C |   size = 3
// 0   1   2   3
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	size_t i = SIZE_MAX;//atoi(argv[1]);

	char dst[] = "dst\0garbage";
	char src[] = "src";

	i = -1;
	int a = ft_strlcat(dst, src, i);
	printf("mem : %s returns : %d\n", dst, a);

	return 0;
}
*/
