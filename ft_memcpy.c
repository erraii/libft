/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:31:35 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/17 14:36:30 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	src_len;
	char	*d;
	char	*s;

	src_len = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (0);
	while (*(s + src_len) && (src_len < n))
	{
		*(d + src_len) = *(s + src_len);
		src_len++;
	}
	return (d);
}
