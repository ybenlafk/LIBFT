/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:15:08 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/24 16:25:29 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_end(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen((char *)s1);
	while (i < len)
	{
		if (!ft_strchr(set, s1[len - i - 1]))
			break ;
		i++;
	}
	return (len - i);
}

static size_t	ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char	*s1, char	*set)
{
	char	*p;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	p = malloc((end - start) + 1);
	if (!p)
		return (0);
	ft_strlcpy(p, s1 + start, (end - start) + 1);
	return (p);
}
