/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:05:55 by fracurul          #+#    #+#             */
/*   Updated: 2023/12/20 20:34:19 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
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
	static char	*s = NULL;
	char		*aux;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_readgnl(fd, s);
	if (!s)
		return (NULL);
	aux = ft_get_line(s);
	s = ft_buffer_ud(s);
	return (aux);
}
