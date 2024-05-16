/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:07:34 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 18:30:48 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief check if parameter is alphanumeric.
 *
 * @param c paramater to be evaluated.
 * @return int, 1 = true | 0 = false.
 */
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
