/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:35:10 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 20:45:34 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief look for a coincidence of 'c' in our str.
 *
 * @param s the string we've.
 * @param c	the pararmeter we are looking for.
 * @param n number of character to compare
 * @return void* pointer to the character | 0 = no character found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*strs;
	unsigned char	strc;
	size_t			i;

	i = 0;
	strs = (unsigned char *)s;
	strc = (unsigned char)c;
	while (i < n)
	{
		if (strs[i] == strc)
			return (&strs[i]);
		i++;
	}
	return (0);
}
