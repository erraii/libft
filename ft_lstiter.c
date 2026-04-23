/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:02:58 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/23 10:15:47 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node_to_iter;

	if (!f || !(lst))
		return ;
	while (lst)
	{
		node_to_iter = lst;
		lst = lst->next;
		f(node_to_iter->content);
	}
}
