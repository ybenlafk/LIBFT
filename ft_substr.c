/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:15:41 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/25 16:47:00 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (0);
	if (start >= ft_strlen((char *)s))
	{
		p = (char *)malloc(sizeof(char));
		p[0] = '\0';
		return (p);
	}
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, (char *)(s + start), len);
	p[len] = '\0';
	return (p);
}
