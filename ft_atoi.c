/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:28:30 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/16 19:06:09 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i])
	{
		if ((nptr[i] >= '0') && (nptr[i] <= '9'))
		{
			result *= 10;
			result += (nptr[i] - 48);
		}
		else
			return (sign * result);
		i++;
	}
}
