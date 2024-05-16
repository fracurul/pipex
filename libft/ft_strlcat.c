/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:20:21 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:15:03 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief appends 2 strings and return the size.
 *
 * @param dst string already appended.
 * @param src string to append.
 * @param dstsize number of characters we're going to append.
 * @return size_t the number of the append.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	while (src[i] != '\0' && i + 1 + lendst < dstsize)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if (dstsize < lendst)
	{
		dst[lendst + i] = '\0';
		return (dstsize + lensrc);
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
