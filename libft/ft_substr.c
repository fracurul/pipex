/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:29:48 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:25:24 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief copy characters given the start index and the size of characters.
 *
 * @param s the string we're going to use
 * @param start the index inside s, to start copy.
 * @param len the number of characters we're going to copy.
 * @return char* str with the character copied.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strs;
	char	*substr;
	size_t	i;
	size_t	l;

	i = 0;
	strs = (char *)s;
	if (ft_strlen(s) <= start)
		l = 0;
	else
		l = ft_strlen(s) - start;
	if (len < l)
		l = len;
	substr = malloc(l + 1);
	if (substr == NULL || s == NULL)
		return (NULL);
	while (i < l)
	{
		substr[i] = strs[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
