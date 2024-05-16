/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:17:16 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:10:03 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief do a malloc of the string we've put in.
 *
 * @param s1 the strin we're going to use.
 * @return char* to the malloc str.
 */
char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (str);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
