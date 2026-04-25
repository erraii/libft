/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:37:39 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/24 12:35:13 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		big_len;
	size_t		little_len;

	big_len = 0;
	if (*(little) == '\0')
		return ((char *)(big));
	while ((big_len < len) && *(big + big_len))
	{
		little_len = 0;
		while ((big_len + little_len < len) && *(little + little_len)
			&& (*(big + big_len + little_len) == *(little + little_len)))
			little_len++;
		if (*(little + little_len) == '\0')
			return ((char *)(big + big_len));
		big_len++;
	}
	return (0);
}
