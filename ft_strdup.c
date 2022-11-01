/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:44:48 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/23 09:40:56 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen((char *)src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = (char)src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
