/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:48:24 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/29 15:08:42 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (s == d)
		return (d);
	if (!s && !d)
		return (NULL);
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(d, s, len);
	return (dst);
}
