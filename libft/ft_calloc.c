/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:50:40 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 18:30:50 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief do malloc type void and fill with zeroes.
 *
 * @param count
 * @param size
 * @return void*
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

	i = (void *)malloc(count * size);
	if (i == NULL)
		return (i);
	ft_bzero(i, count * size);
	return (i);
}
