/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:35:39 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/21 13:57:07 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem_copied;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb != 0 && (size > (total_size / nmemb)))
		return (0);
	mem_copied = malloc(total_size);
	if (!mem_copied)
		return (0);
	ft_bzero(mem_copied, total_size);
	return (mem_copied);
}
