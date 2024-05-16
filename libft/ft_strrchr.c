/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:15:17 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:22:28 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief looks for a coincidence of 'c' into string.
 *
 * @param s the string we've.
 * @param c the character we look for.
 * @return char* to the coincidence | null = no coincidence.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	j;
	char	*strs;

	i = ft_strlen(s);
	j = (char)c;
	strs = (char *)s;
	while (strs[i] != j && i > 0)
		i--;
	if (strs[i] == j)
		return (&strs[i]);
	return (NULL);
}
