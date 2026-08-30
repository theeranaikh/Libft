/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhunhan <tkhunhan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 21:23:22 by tkhunhan          #+#    #+#             */
/*   Updated: 2026/08/30 22:06:45 by tkhunhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned char	*str;
	unsigned char	*buffer;
	size_t			size;
	size_t			len;

	len = 0;
	str = (unsigned char *)s1;
	size = ft_strlen(s1);
	buffer = malloc(size + 1);
	if (!buffer)
		return (NULL);
	while (str[len] != '\0')
	{
		buffer[len] = str[len];
		len++;
	}
	buffer[len] = '\0';
	return ((char *)buffer);
}
