/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:24:08 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/21 18:48:47 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_count_words(char *s, char c)
{
	char	prev_char;
	int		count;

	count = 0;
	prev_char = c;
	while (*s)
	{
		if ((*s != c) && (prev_char == c))
			count++;
		prev_char = *s;
		s++;
	}
	return (count);
}

char	*ft_fill_each(char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (*(s + len) && *(s + len) != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	len = 0;
	while (*(s + len) && (*(s + len) != c))
	{
		word[len] = *(s + len);
		len++;
	}
	word[len] = '\0';
	return (word);
}

void	ft_fill_malloc(char **ret, char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			ret[j] = ft_fill_each(&s[i], c);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	ret[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		word_count;

	if (!s)
		return (0);
	word_count = ft_count_words((char *)s, c);
	ret = malloc((word_count + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ft_fill_malloc(ret, (char *)s, c);
	ret[word_count] = NULL;
	return (ret);
}
