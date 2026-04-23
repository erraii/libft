/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:28:30 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/18 15:36:03 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_begin(char *str, int *sign, int *i)
{
	while ((str[*i] == ' ') || str[*i] == '\n' || str[*i] == '\t'
		|| str[*i] == '\r' || str[*i] == '\f' || str[*i] == '\v')
		(*i)++;
	if (str[*i] == '-')
	{
		*sign *= -1;
		(*i)++;
		return (1);
	}
	else if (str[*i] == '+')
	{
		(*i)++;
		return (1);
	}
	else if ((str[*i] >= '0') && str[*i] <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	if (check_begin((char *)nptr, &sign, &i) == 1)
	{
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
	else
		return (0);
	return (sign * result);
}
