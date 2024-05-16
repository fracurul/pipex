/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:25:51 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/20 18:35:44 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_printchar(char c, int *bytecnt);
void	ft_printstr(char *str, int *bytecnt);
void	ft_printnb(int long nb, int *bytecnt);
void	ft_printbase(unsigned long long nb, char *base, int *bytecnt);
void	ft_printpnt(unsigned long long pnt, int *bytecnt);
void	ft_percent(int *bytecnt);
#endif
