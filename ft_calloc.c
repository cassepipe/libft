/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:00:07 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/26 10:40:11 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *ft_memalloc(size_t size)
{
	void	*data;

	data = malloc(size);
	if (data)
		ft_bzero(data, size);
	return (data);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	return ft_memalloc(nmemb * size);
}

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (ret)
		ft_bzero(ret, size);
	return (ret);
}
*/
