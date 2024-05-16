/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:53:56 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 20:47:12 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief compare 2 strings.
 *
 * @param s1 string 1.
 * @param s2 string to use as comparation.
 * @param n size of characters we're going to compare.
 * @return int the difference between the 2 letters.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*strs1;
	unsigned char	*strs2;
	size_t			i;

	strs1 = (unsigned char *)s1;
	strs2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && strs1 && strs2 && strs1[i] == strs2[i])
		i++;
	return (strs1[i] - strs2[i]);
}
