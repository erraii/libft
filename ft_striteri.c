/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:16:11 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/22 14:39:16 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	src_len;

	src_len = 0;
	if (s)
	{
		while (s[src_len])
		{
			f(src_len, s + src_len);
			src_len++;
		}
	}
}
