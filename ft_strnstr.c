/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:37:39 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/16 17:45:11 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	int		str_len;
	int		little_len;

	str_len = 0;
	if (*(little) == '\0')
		return (big);
	while (*(big + str_len) && str_len < len)
	{
		little_len = 0;
		while ((*(big + str_len + little_len) == *(little + little_len))
			&& *(little + little_len))
			little_len++;
		if (*(little + little_len) == '\0')
			return (big + str_len);
		str_len++;
	}
	return (0);
}
