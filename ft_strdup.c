/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:30:26 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/20 10:33:51 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		str_len;
	char	*mem_copied;

	str_len = 0;
	while (s[str_len])
		str_len++;
	mem_copied = malloc((str_len + 1) * sizeof(char));
	if (!mem_copied)
		return (0);
	str_len = 0;
	while (s[str_len])
	{
		mem_copied[str_len] = s[str_len];
		str_len++;
	}
	mem_copied[str_len] = '\0';
	return (mem_copied);
}
