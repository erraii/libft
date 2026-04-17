/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:37:39 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/17 10:20:26 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t		str_len;
	size_t		little_len;

	str_len = 0;
	if (*(little) == '\0')
		return ((char *)(big));
	while (*(big + str_len) && str_len < len)
	{
		little_len = 0;
		while ((*(big + str_len + little_len) == *(little + little_len))
			&& *(little + little_len))
			little_len++;
		if (*(little + little_len) == '\0')
			return ((char *)(big + str_len));
		str_len++;
	}
	return (0);
}
