/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:50:07 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/10/27 19:48:07 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

static char	*cases(int n, char *s)
{
	int	j;
	int	flag;

	j = 0;
	flag = 0;
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	if (n < 0)
	{
		flag = 1;
		n = -n;
	}
	while (n)
	{
		s[j++] = (n % 10) + '0';
		n /= 10;
	}
	if (flag)
		s[j++] = '-';
	s[j] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = nb_len(n);
	s = (char *)malloc(i + 1);
	if (!s)
		return (0);
	cases(n, s);
	ft_strrev(s);
	return (s);
}
