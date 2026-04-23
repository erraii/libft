/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 08:45:21 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/23 10:00:04 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node_to_del;

	if (!del || !(lst) || !(*lst))
		return ;
	while (*lst)
	{
		node_to_del = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(node_to_del, del);
	}
}
