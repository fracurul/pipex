/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:13:44 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/20 18:36:51 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char s, int *bytecnt)
{
	if (s == 'c')
		ft_printchar(va_arg(va, int), bytecnt);
	else if (s == 's')
		ft_printstr(va_arg(va, char *), bytecnt);
	else if (s == 'p')
		ft_printpnt(va_arg(va, unsigned long long), bytecnt);
	else if (s == 'i' || s == 'd')
		ft_printnb(va_arg(va, int), bytecnt);
	else if (s == 'u')
		ft_printbase(va_arg(va, unsigned int), "0123456789", bytecnt);
	else if (s == 'x' || s == 'X')
	{
		if (s == 'x')
			ft_printbase(va_arg(va, unsigned int), "0123456789abcdef", bytecnt);
		else
			ft_printbase(va_arg(va, unsigned int), "0123456789ABCDEF", bytecnt);
	}
	else if (s == '%')
		ft_percent(bytecnt);
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	int		bytecnt;
	va_list	formats;

	va_start(formats, s);
	i = -1;
	bytecnt = 0;
	while (s[++i] && bytecnt != -1)
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i])
				ft_format(formats, s[i], &bytecnt);
		}
		else
			ft_printchar(s[i], &bytecnt);
	}
	va_end(formats);
	return (bytecnt);
}

/*
#include <stdio.h>
int main()
{
	int i;
	int j;

	j = ft_printf(" NULL %s NULL ", NULL);
	printf("%d", j);

}*/