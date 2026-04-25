/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 15:41:51 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/25 22:59:23 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	unsigned char	uc;
	size_t			i;

	if (n == 0)
		return (0);
	us = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while ((i < n))
	{
		if (*us == uc)
			return (us);
		us++;
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	if (ft_memchr(s, 0, 0) == NULL)
// 		printf("OK");
// 	return 0;
// }
