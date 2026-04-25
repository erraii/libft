/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:16:54 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/25 22:33:28 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	w_size;

	dst_size = 0;
	while ((dst_size < size) && dst[dst_size])
		dst_size++;
	src_size = 0;
	w_size = 0;
	while (src[src_size])
	{
		if (dst_size + src_size + 1 < size)
		{
			dst[dst_size + src_size] = src[src_size];
			w_size++;
		}
		src_size++;
	}
	if (dst_size < size)
		dst[dst_size + w_size] = '\0';
	return (dst_size + src_size);
}
// int main ()
// {
// 	char	*dest;
// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	dest[14] = 'a';
// 	printf("%zu\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
// 	printf("%s",dest);
// 	return(0);
// }