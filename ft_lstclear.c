/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:00:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/22 20:29:41 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst && del)
	{
		while (*lst)
		{
			p = *lst;
			del(p->content);
			*lst = p->next;
			free(p);
		}
		p = NULL;
	}
}
