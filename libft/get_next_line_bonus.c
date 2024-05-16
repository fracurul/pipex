/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:40:27 by fracurul          #+#    #+#             */
/*   Updated: 2024/01/11 16:46:16 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

char	*ft_get_line(char *s)
{
	char	*line;
	int		i;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	line = (char *)gnl_calloc((i + 2), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		line[i] = s[i];
		i++;
	}
	if (s[i] == '\n' && s[i])
		line[i] = '\n';
	return (line);
}

char	*ft_readgnl(int fd, char *s)
{
	char	*bufferword;
	int		checkread;

	checkread = 1;
	bufferword = (char *)gnl_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (!bufferword)
		return (NULL);
	while (checkread > 0)
	{
		checkread = read(fd, bufferword, BUFFER_SIZE);
		if (checkread == -1)
			return (free(bufferword), free(s), NULL);
		bufferword[checkread] = '\0';
		s = gnl_strjoin(s, bufferword);
		if (gnl_strchr(s, '\n'))
			break ;
	}
	free(bufferword);
	return (s);
}

char	*ft_buffer_ud(char *s)
{
	char	*excessbuffer;
	int		i;
	int		j;
	int		buffersize;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
		return (free(s), NULL);
	buffersize = gnl_strlen(s);
	excessbuffer = (char *)gnl_calloc((buffersize - i + 1), sizeof(char));
	if (!excessbuffer)
		return (NULL);
	j = 0;
	i++;
	while (s[i])
		excessbuffer[j++] = s[i++];
	return (free(s), excessbuffer);
}

char	*get_next_line(int fd)
{
	static char	*s[4096];
	char		*aux;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s[fd] = ft_readgnl(fd, s[fd]);
	if (!s[fd])
		return (NULL);
	aux = ft_get_line(s[fd]);
	s[fd] = ft_buffer_ud(s[fd]);
	return (aux);
}
