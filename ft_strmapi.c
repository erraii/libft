/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:40:05 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/25 13:35:38 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	src_len;
	unsigned int	i;
	char			*ret;

	if (!s || !f)
		return (0);
	src_len = ft_strlen(s);
	ret = malloc((src_len + 1) * sizeof(char));
	if (!ret)
		return (0);
	i = 0;
	while (i < src_len)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
