/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:31:35 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/25 13:35:25 by ecakiray         ###   ########.fr       */
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
	while ((src_len < n))
	{
		*(d + src_len) = *(s + src_len);
		src_len++;
	}
	return (d);
}
// int main (void)
// {
// 	void	*mem;
// 	if (!(mem = malloc(sizeof(*mem) * 30)))
// 		return (0);
// 	memset(mem, 'j', 30);
// 	if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
// 		write(1, "dest's adress was not returned\n", 31);
// 	write(1, mem, 30);
// }