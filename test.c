/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:50:26 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/16 16:12:35 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	int	ch[] = {'0', '9', 'a', 'c', '\t', '\n', 127, 128, 256, 0};

	char* str[] = {"I am a string!", "9", "", "ecakiray", "\t", "42"};

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

		// isprint
		if (!((ft_isprint(ch[i]) == 0 && isprint(ch[i]) == 0)
			||  (ft_isprint(ch[i]) > 0 && isprint(ch[i]) > 0)))
			printf("error in isprint with %c\n", ch[i]);

	}

	for (int i = 0; i < 6; i++)
	{
		// strlen
		if (!(ft_strlen(str[i]) == strlen(str[i])))
			printf("error in strlen with %s\n", str[i]);
	}

}
