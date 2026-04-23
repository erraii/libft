/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:51:10 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/22 15:00:50 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	long_nb;

	long_nb = n;
	if (long_nb < 0)
	{
		ft_putchar_fd('-', fd);
		long_nb *= -1;
	}
	if (long_nb > 9)
	{
		ft_putnbr_fd (long_nb / 10, fd);
	}
	c = 48 + (long_nb % 10);
	ft_putchar_fd(c, fd);
}
