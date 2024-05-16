/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:41:08 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:18:34 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief allocate str malloc and iterate f function.
 *
 * @param s string to iterate.
 * @param f function to itarate.
 * @return char* malloc str with characters already iterated.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = -1;
	str = malloc(ft_strlen((char *)s) + 1);
	if (!str)
		return (str);
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = 0;
	return (str);
}
