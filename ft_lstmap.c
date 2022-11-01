/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:03:44 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/31 19:04:56 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*next;
	t_list	*tmp;

	tmp = lst;
	next = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (tmp)
	{
		res = ft_lstnew(f(tmp->content));
		if (!res)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&next, res);
		tmp = tmp->next;
	}
	return (next);
}
