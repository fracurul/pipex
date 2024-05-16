/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:32:09 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/07 18:28:35 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief check the number of digits and the sign.
 *
 * @param n int number casted to long.
 * @return int the number of digits i've.
 */
static int	count_number(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
/**
 * @brief converts int to string.
 *
 * @param n number we have.
 * @return *char, the int number converts to char.
 */

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	j;

	j = (long)n;
	i = count_number(j);
	str = malloc(i + 1);
	if (!str)
		return (str);
	str[i--] = '\0';
	if (j < 0)
	{
		j *= -1;
		str[0] = '-';
	}
	if (j == 0)
		str[0] = '0';
	while (j > 9)
	{
		str[i--] = (j % 10) + 48;
		j = j / 10;
	}
	str[i] = j + 48;
	return (str);
}
