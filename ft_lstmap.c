/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:15:02 by ecakiray          #+#    #+#             */
/*   Updated: 2026/04/23 12:24:31 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		size;
	t_list	*new_list;

	size = ft_lstsize(lst);
	new_list = malloc ((size + 1) * sizeof(t_list));
	if (!new_list)
		return (0);
	new_list = lst;
	while (lst)
	{
		f(lst->content);
		new_list->content = lst->content;
		new_list->next = lst->next;
		new_list = new_list->next;
		lst = lst->next;
	}
	return (new_list);
}
