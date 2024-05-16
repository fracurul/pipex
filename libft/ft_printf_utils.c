/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:34:07 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/20 18:37:09 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c, int *bytecnt)
{
	int	protect;

	protect = write(1, &c, 1);
	*bytecnt = *bytecnt + 1;
	if (protect == -1)
		*bytecnt = -1;
}

void	ft_printstr(char *str, int *bytecnt)
{
	size_t	i;

	i = -1;
	if (!str)
		ft_printstr("(null)", bytecnt);
	while (str && str[++i])
		ft_printchar(str[i], bytecnt);
}

void	ft_printnb(int long nb, int *bytecnt)
{
	if (nb < 0)
	{
		ft_printchar('-', bytecnt);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_printnb(nb / 10, bytecnt);
		ft_printnb(nb % 10, bytecnt);
	}
	else
		ft_printchar(nb + '0', bytecnt);
}

void	ft_percent(int *bytecnt)
{
	ft_printchar('%', bytecnt);
}
