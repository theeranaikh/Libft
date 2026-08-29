/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhunhan <tkhunhan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 01:30:37 by tkhunhan          #+#    #+#             */
/*   Updated: 2026/08/30 02:14:56 by tkhunhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_wspace(const char *str)
{
	int	len;

	len = 0;
	while ((str[len] >= 9 && str[len] <= 13) || str[len] == ' ')
		len++;
	return (len);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned char	*s;
	long			res;

	i = is_wspace(str);
	sign = 1;
	res = 0;
	s = (unsigned char *)str;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
