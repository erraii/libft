/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:40:05 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/22 13:56:26 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	src_len;
	char			*ret;

	if (!s)
		return (0);
	src_len = ft_strlen(s);
	ret = malloc((src_len + 1) * sizeof(char));
	if (!ret)
		return (0);
	ret[src_len] = '\0';
	while (src_len-- >= 0)
	{
		ret[src_len] = f(src_len, s[src_len]);
		if (src_len == 0)
			break ;
	}
	return (ret);
}
