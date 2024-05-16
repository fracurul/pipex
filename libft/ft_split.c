/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:10:35 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/06 21:03:43 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/**
 * @brief count the words we've in the string.
 *
 * @param s the string we are going to split.
 * @param c the delimiter character
 * @return size_t the number of words we've.
 */
static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	numw;
	size_t	checkword;

	i = 0;
	numw = 0;
	checkword = 1;
	while (s[i])
	{
		if (s[i] != c && checkword == 1)
		{
			numw++;
			checkword = 0;
		}
		if (s[i] == c)
			checkword = 1;
		i++;
	}
	return (numw);
}

/**
 * @brief delete the allocate malloc in split.
 *
 * @param split the parameter to free.
 */
static void	delete(char **split)
{
	size_t	j;

	j = 0;
	while (split[j] != NULL)
		free(split[j++]);
	free(split[j]);
	free(split);
}

/**
 * @brief do the word between delimiters
 *
 * @param s the string
 * @param c the delimiter character.
 * @param pos the position we found the delimiter character
 * @return char* of the word done.
 */
static char	*make_word(const char *s, char c, size_t pos)
{
	size_t	letcnt;
	char	*word;
	int		size;

	letcnt = pos;
	size = 0;
	while (s[letcnt] != c && s[letcnt])
	{
		size++;
		letcnt++;
	}
	word = ft_substr(s, pos, size);
	if (!word)
		return (NULL);
	return (word);
}

/**
 * @brief separe words between delimiters.
 *
 * @param s the string we've.
 * @param c the delimiter character.
 * @return char** malloc of the string splitted.
 */
char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	j;
	char	**split;

	i = -1;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split || !s)
		return (NULL);
	split[count_words(s, c)] = NULL;
	while (j < count_words(s, c) && s[++i])
	{
		if (s[i] != c)
		{
			split[j] = make_word(s, c, (size_t)i);
			if (!split[j])
			{
				delete (split);
				return (NULL);
			}
			i += ft_strlen(split[j++]);
		}
	}
	return (split);
}
