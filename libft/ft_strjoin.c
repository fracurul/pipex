/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:04:56 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:12:38 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief appends 2 strings.
 *
 * @param s1 1st string
 * @param s2 string to append.
 * @return char* malloc with the 2 string appended.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = lens1 + lens2;
	str = (char *)malloc(i + 1);
	if (!str)
		return (str);
	i = -1;
	while (++i < lens1)
		str[i] = s1[i];
	j = -1;
	while (++j < lens2)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
