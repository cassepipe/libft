/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:04:37 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/14 17:05:41 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 int main(int argc, char **argv)
{
	printf("%c is a digit : %d\n", argv[1][0], ft_isdigit(argv[1][0]));
	printf("%c is a digit : %d\n", argv[1][0], isdigit(argv[1][0]));
}
*/
