/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:44:01 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/22 21:45:18 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst)
	{
		current = *lst;
		while (current)
		{
			if (!(current->next))
			{
				current->next = new;
				new->next = 0;
			}
			current = current->next;
		}
	}
	else
		*lst = new;
}
