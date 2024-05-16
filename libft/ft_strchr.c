/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:53:17 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:08:44 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief looks for a coincidence of 'c' in str.
 *
 * @param s the string we've.
 * @param c the character we are looking for.
 * @return char* to the coincidence.
 */
char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	j;
	char	*k;

	i = 0;
	j = (char)c;
	k = (char *)s;
	while (k[i] != j && k[i] != '\0')
		i++;
	if (k[i] == j)
		return (&k[i]);
	return (0);
}
