/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 15:41:51 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/24 20:11:27 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*us;
	char	uc;
	size_t	i;

	if (n == 0)
		return (0);
	us = (char *)s;
	uc = (char)c;
	i = 0;
	while ((i < n))
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

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	if (ft_memchr(s, 0, 0) == NULL)
// 		printf("OK");
// 	return 0;
// }
