/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:33:38 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/22 14:38:07 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	src_len;

	if (s)
	{
		src_len = 0;
		while (s[src_len])
		{
			ft_putchar_fd(s[src_len], fd);
			src_len++;
		}
	}
}
