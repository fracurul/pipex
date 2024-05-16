/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:56:53 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:11:24 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief iterate f function in all string characters
 *
 * @param s the string we've.
 * @param f the functions to be iterated.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
