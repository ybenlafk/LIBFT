/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:09:04 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/26 13:34:17 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	i = 0;
	if (!str && !n)
		return (NULL);
	n_len = ft_strlen((char *)to_find);
	if (n_len == 0 || str == to_find)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] && to_find[j]
			&& str[i + j] == to_find[j] && i + j < n)
			j++;
		if (j == n_len)
			return ((char *)str + i);
		i++;
	}
	return (0);
}
