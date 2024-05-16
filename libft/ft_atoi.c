/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:11:17 by fracurul          #+#    #+#             */
/*   Updated: 2024/03/13 16:58:35 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief check sign function
 *
 * @param str string characters
 * @param i
 * @return sign can be + or -
 */
int	ft_check_sign(const char *str, int *i)
{
	int	signo;

	signo = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signo *= -1;
		*i += 1;
	}
	return (signo);
}
/**
 * @brief functions that converts string to int.
 *
 * @param str string characters.
 * @return string convert to int.
 */

int	ft_atoi(const char *str)
{
	int	i;
	int	resultado;
	int	signo;

	i = 0;
	resultado = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	signo = ft_check_sign(str, &i);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (resultado * signo);
}
