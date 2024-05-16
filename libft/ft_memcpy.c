/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:02:27 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 20:49:13 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief copy src to src.
 *
 * @param dst the destination of the string we're going to copy.
 * @param src the string we're going to copy.
 * @param n number of characters to copy
 * @return void* pointer to dst with the src content already copied to dst
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strdst;
	const char	*strsrc;
	size_t		i;

	strdst = (char *)dst;
	strsrc = (const char *)src;
	i = 0;
	if (strdst == strsrc || n == 0)
		return (dst);
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
