/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:51:59 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/24 12:21:18 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_count_digit(int nb, int *digit_num)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		(*digit_num)++;
		long_nb *= -1;
	}
	if (long_nb > 9)
		ft_count_digit (long_nb / 10, digit_num);
	(*digit_num)++;
}

static void	ft_putdigit(long nb, char *s, int *size)
{
	char	c;

	if (nb < 0)
	{
		s[*size] = '-';
		(*size)++;
		nb *= -1;
	}
	if (nb > 9)
		ft_putdigit (nb / 10, s, size);
	c = 48 + (nb % 10);
	s[*size] = c;
	(*size)++;
}

char	*ft_itoa(int n)
{
	long	long_nb;
	char	*ret;
	int		size;

	long_nb = n;
	size = 0;
	ft_count_digit(long_nb, &size);
	ret = malloc ((size + 1) * sizeof(char));
	if (!ret)
		return (0);
	size = 0;
	ft_putdigit(long_nb, ret, &size);
	ret[size] = '\0';
	return (ret);
}
