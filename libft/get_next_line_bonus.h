/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:18:17 by fracurul          #+#    #+#             */
/*   Updated: 2024/02/15 17:21:25 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

void	*gnl_calloc(size_t count, size_t size);
char	*get_next_line(int fd);
char	*gnl_strjoin(char *s1, char *s2);
char	*ft_buffer_ud(char *s);
char	*ft_get_line(char *s);
int		gnl_strchr(char *s, int c);
int		gnl_strlen(const char *s);

#endif