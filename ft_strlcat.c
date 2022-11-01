/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:07:03 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/24 16:57:03 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	if (n == 0)
		return (ft_strlen((char *)src));
	i = ft_strlen(dst);
	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen((char *)src);
	if (n < 1)
		return (len_s + n);
	while (src[j] && i < n - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (n < len_d)
		return (len_s + n);
	else
		return (len_d + len_s);
}
