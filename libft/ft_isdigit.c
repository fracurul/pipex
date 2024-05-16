/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:55:27 by fracurul          #+#    #+#             */
/*   Updated: 2024/03/26 19:48:49 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief check if parameter is a digit.
 *
 * @param c parameter to be evaluated.
 * @return int, 1 = true | 0 = false.
 */
int	ft_isdigit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
