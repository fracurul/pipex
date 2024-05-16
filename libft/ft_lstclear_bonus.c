/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:03:01 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 19:06:22 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief clear the entire list.
 *
 * @param lst the list we've.
 * @param del fuctions that delete content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nod;
	t_list	*auxnod;

	nod = *lst;
	if (!lst || !del)
		return ;
	while (nod)
	{
		auxnod = nod->next;
		del(nod->content);
		free(nod);
		nod = auxnod;
	}
	*lst = NULL;
}
