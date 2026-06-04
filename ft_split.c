/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:23:13 by salonso-          #+#    #+#             */
/*   Updated: 2026/06/01 20:17:23 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c);
int		malloc_check(char **words, int pos, int len);
int		get_words(char **words, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**words;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	if (get_words(words, s, c) == 0)
		return (NULL);
	return (words);
}

size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	get_words(char **words, const char *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s != '\0')
	{
		len = 0;
		while (*s == c && *s != '\0')
			s++;
		while (*s != c && *s != '\0')
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (malloc_check(words, i, len) == 0)
				return (0);
			ft_strlcpy(words[i], s - len, len + 1);
			i++;
		}
	}
	words[i] = NULL;
	return (1);
}

int	malloc_check(char **words, int pos, int len)
{
	int	i;

	words[pos] = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (words[pos] == NULL)
	{
		while (i < pos)
		{
			free(words[i]);
			i++;
		}
		free(words);
		return (0);
	}
	return (1);
}
