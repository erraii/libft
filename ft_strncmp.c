/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:28:16 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/16 17:45:13 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	str_len;

	str_len = 0;
	while (*(s1 + str_len) && *(s2 + str_len)
		&& ((*(s1 + str_len) - *(s2 + str_len)) == 0) && (str_len < n))
		str_len++;
	if ((*(s1 + str_len) == *(s2 + str_len))
		|| (n == 0) || str_len == n)
		return (0);
	else
		return (*(s1 + str_len) - *(s2 + str_len));
}
