/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:03:57 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:21:12 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief looks for a word inside string
 *
 * @param haystack the string we've.
 * @param needle the word we're looking for.
 * @param n number of characters we're going to look.
 * @return char* to the coincidence of the word.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && j + i < n)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
