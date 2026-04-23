/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:37:38 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/20 14:12:20 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (0);
	i = 0;
	if (s > d)
	{
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else if (s < d)
	{
		while (n-- > 0)
			*(d + n) = *(s + n);
	}
	return (d);
}
