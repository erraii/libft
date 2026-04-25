/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:00:36 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/24 12:20:07 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	check_if_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		start;
	int		end;

	if (!s1)
		return (0);
	i = 0;
	start = -1;
	while (s1[i])
	{
		if ((check_if_set(s1[i], set) == 0) && start < 0)
			start = i;
		if (start >= 0 && (check_if_set(s1[i], set) == 0))
			end = i;
		i++;
	}
	return (ft_substr(s1, start, (end - start + 1)));
}
