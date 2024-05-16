/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:04:52 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:15:52 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief copy src string into dst and return the size of src string.
 *
 * @param dst the string to replace.
 * @param src the string we want to copy.
 * @param dstsize the number of character we're going to copy.
 * @return size_t of the src string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0 || src == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(src));
}
