/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:00:26 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/16 15:00:42 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*root;
	t_list	*temp;

	root = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst -> content));
		if (!temp)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, temp);
		lst = lst -> next;
	}
	return (root);
}

// TODO: tekrar gozden gecir