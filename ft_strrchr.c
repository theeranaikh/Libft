/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhunhan <tkhunhan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 22:09:52 by tkhunhan          #+#    #+#             */
/*   Updated: 2026/08/29 22:16:54 by tkhunhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}