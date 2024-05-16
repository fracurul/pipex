/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:37:44 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:23:24 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief trim the start and the end of the string.
 *
 * @param s1 the string we've
 * @param set the character we want to trim.
 * @return char* string already trimmed.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strs;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1[start])
		return (ft_strdup(""));
	while (ft_strchr(set, (int)s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[end]))
		end--;
	strs = ft_substr(s1, start, (end - start) + 1);
	return (strs);
}
