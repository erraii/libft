/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:31:35 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/16 21:11:20 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
	size_t	src_len;
	char	*dst;
	char	*src;

	src_len = 0;
	dst = (char *)s1;
	src = (char *)s2;
	while (*(src + src_len))
	{
		*(dst + src_len) = *(src + src_len);
		src_len++;
	}
	return (s1);
}
