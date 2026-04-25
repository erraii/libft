/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:11:27 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/25 12:37:52 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			str_len;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	str_len = 0;
	while (((*(us1 + str_len) - *(us2 + str_len)) == 0) && (str_len < (n - 1)))
		str_len++;
	if (*(us1 + str_len) == *(us2 + str_len))
		return (0);
	else
		return (*(us1 + str_len) - (*(us2 + str_len)));
}
