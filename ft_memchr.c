/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 15:41:51 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/19 16:27:25 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	unsigned char	uc;
	size_t			i;

	us = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while ((i < n) && (*us != '\0'))
	{
		if (*us == uc)
			return (us);
		us++;
		i++;
	}
	if (uc == '\0')
		return (us);
	return (0);
}
