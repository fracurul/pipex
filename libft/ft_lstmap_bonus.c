/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:55:05 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 19:13:48 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief iterate lst and apply f fuction to each node
 *
 * @param lst list we've.
 * @param f fuctions to iterate.
 * @param del fuctions to delate.
 * @return t_list* pointer to the iterated list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	newlist = NULL;
	while (lst)
	{
		newnode = ft_lstnew(NULL);
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newnode->content = f(lst->content);
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
