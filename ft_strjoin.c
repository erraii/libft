/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:24:41 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/21 19:22:28 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	sjoin_len;

	if (!s1 || !s2)
		return (0);
	sjoin_len = ft_strlen(s1);
	sjoin_len += ft_strlen(s2) + 1;
	sjoin = malloc (sjoin_len);
	if (!sjoin)
		return (0);
	ft_bzero(sjoin, sjoin_len);
	ft_strlcat(sjoin, s1, sjoin_len);
	ft_strlcat(sjoin, s2, sjoin_len);
	return (sjoin);
}
