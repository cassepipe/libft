/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 11:28:18 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/23 17:27:55 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*result;
	t_list	*map;

	map = malloc(sizeof(t_list));
	if (!map || !lst || !f || !del)
		return (NULL);
	result = map;
	while (lst && map)
	{
		map = f(lst);
		lst = lst->next;
		map = map->next;
		map = malloc(sizeof(t_list));
		if (!map)
			ft_lstclear(&result, del);
	}
	return (result);
}
