/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:54:15 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 19:19:03 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief add  new node at the start of the list 'lst'.
 *
 * @param lst the list we've.
 * @param new the node to add at the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
		new->next = *lst;
	*lst = new;
}
