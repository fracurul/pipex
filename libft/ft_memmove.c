/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:14:38 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 20:50:59 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief move src to dst.
 *
 * @param dst the destination of src moved.
 * @param src the string we're going to move.
 * @param len number of characters we're going to move.
 * @return void* pointer to dst with source already moved.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*strsrc;
	char	*strdst;

	strdst = (char *)dst;
	strsrc = (char *)src;
	if (len == 0)
		return (dst);
	if (strdst > strsrc)
	{
		while (0 < len)
		{
			strdst[len - 1] = strsrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(strdst, strsrc, len);
	return (dst);
}
