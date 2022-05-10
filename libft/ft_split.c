/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 06:12:21 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/09 06:40:33 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	m;
	int	count;

	m = 0;
	count = 0;
	while (str[m] != '\0')
	{
		if (str[m] == c)
			m++;
		else
		{
			count++;
			while (str[m] && str[m] != c)
				m++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, const char *s, int i, int word_len)
{
	int	c;

	c = 0;
	while (word_len > 0)
	{
		word[c] = s[i - word_len];
		c++;
		word_len--;
	}
	word[c] = '\0';
	return (word);
}

static char	**ft_split_words(const char *s, char c, char **s2, int num_words)
{
	int	d;
	int	word;
	int	word_len;

	d = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[d] && s[d] == c)
			d++;
		while (s[d] && s[d] != c)
		{
			d++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[word], s, d, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	ft_split_words(s, c, s2, num_words);
	return (s2);
}
