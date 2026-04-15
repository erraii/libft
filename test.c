/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:50:26 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/15 20:44:35 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	ch[] = {'0', '9', 'a', 'c', '\t', '\n', 127, 128, 256, 0};

	int n = sizeof(ch) / sizeof(ch[0]);
	//printf("size %d\n", n);
	for (int i = 0; i < n; i++)
	{
		// isalpha
		if (!((ft_isalpha(ch[i]) == 0 && isalpha(ch[i]) == 0)
			||  (ft_isalpha(ch[i]) > 0 && isalpha(ch[i]) > 0)))
			printf("error in isalpha with %c\n", ch[i]);

		// isdigit
		if (!((ft_isdigit(ch[i]) == 0 && isdigit(ch[i]) == 0)
			||  (ft_isdigit(ch[i]) > 0 && isdigit(ch[i]) > 0)))
			printf("error in isdigit with %c\n", ch[i]);

		// isalnum
		if (!((ft_isalnum(ch[i]) == 0 && isalnum(ch[i]) == 0)
			||  (ft_isalnum(ch[i]) > 0 && isalnum(ch[i]) > 0)))
			printf("error in isalnum with %c\n", ch[i]);

		// isascii
		if (!((ft_isascii(ch[i]) == 0 && isascii(ch[i]) == 0)
			||  (ft_isascii(ch[i]) > 0 && isascii(ch[i]) > 0)))
			printf("error in isascii with %c\n", ch[i]);
	}
}
