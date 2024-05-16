/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:24:20 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 20:56:02 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief write a character by the designed fd.
 *
 * @param c the char to write.
 * @param fd the file descriptor we want to use.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
