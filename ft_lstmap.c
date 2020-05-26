/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpouget <cassepipe@ymail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 11:28:18 by tpouget           #+#    #+#             */
/*   Updated: 2020/05/26 09:48:40 by tpouget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_list;
	t_list	*element;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*result;
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element || !lst || !f)
		return (NULL);
	result = element;
	while (lst && element)
	{
		element = (t_list*)f(lst);
		lst = lst->next;
		element = element->next;
		element = malloc(sizeof(t_list));
		if (!element)
			ft_lstclear(&result, del);
	}
	return (result);
}
*/
