/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:49:56 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 14:47:52 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		t = ft_lstnew(f(lst->content));
		if (!(t))
			ft_lstdelone(new, del);
		ft_lstadd_back(&new, t);
		lst = lst->next;
	}
	return (new);
}
