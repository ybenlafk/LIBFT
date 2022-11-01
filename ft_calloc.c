/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:25:59 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/30 14:53:39 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
