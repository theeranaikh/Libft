/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhunhan <tkhunhan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 21:11:05 by tkhunhan          #+#    #+#             */
/*   Updated: 2026/08/29 21:30:06 by tkhunhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_dstlen(const char *dst, size_t n)
{
	size_t	dst_len;

	dst_len = 0;
	while (dst_len < n && dst[dst_len] != '\0')
	{
		dst_len++;
	}
	return (dst_len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	r;

	i = 0;
	d = ft_dstlen(dst, dstsize);
	s = ft_strlen(src);
	r = d + s;
	if (d < dstsize)
	{
		while (src[i] != '\0' && d + 1 < dstsize)
		{
			dst[d] = src[i];
			i++;
			d++;
		}
		dst[d] = '\0';
	}
	return (r);
}
