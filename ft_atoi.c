/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:45:46 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/27 19:56:59 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	scapes(char *str, int *i)
{
	while (str[*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f'
		|| str[*i] == '\r' || str[*i] == ' ')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	size_t	res;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	scapes((char *)str, &i);
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
		res = res * 10 + str[i++] - '0';
	return (res * sign);
}
