/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:19:42 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/22 18:24:27 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	src_len;

	if (!s)
		return (0);
	src_len = ft_strlen(s);
	if (start >= src_len)
	{
		dst = ft_calloc(1, 1);
		if (!dst)
			return (0);
		return (dst);
	}
	if (len <= (src_len - start))
		dst = malloc(len * sizeof(char) + 1);
	else
		dst = malloc((src_len - start) * sizeof(char) + 1);
	if (!dst)
		return (0);
	src_len = ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
