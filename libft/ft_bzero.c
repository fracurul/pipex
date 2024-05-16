/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:05:22 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 18:30:55 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief fill string with zeroes.
 *
 * @param s string.
 * @param n number of zeroes.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
