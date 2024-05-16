/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:33:25 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:20:03 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief compare 2 strings until n bytes.
 *
 * @param s1 1st string.
 * @param s2 string to compare.
 * @param n number of character to compare.
 * @return int 1 = s1 > s2 | -1 = s1 < s2 | 0 = s1 == s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*strs1;
	unsigned char	*strs2;
	size_t			i;

	i = 0;
	strs1 = (unsigned char *)s1;
	strs2 = (unsigned char *)s2;
	while (i < n && (strs1[i] || strs2[i]))
	{
		if (strs1[i] > strs2[i])
			return (1);
		else if (strs1[i] < strs2[i])
			return (-1);
		i++;
	}
	return (0);
}
