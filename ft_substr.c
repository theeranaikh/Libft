/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhunhan <tkhunhan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 09:24:16 by tkhunhan          #+#    #+#             */
/*   Updated: 2026/09/08 17:53:14 by tkhunhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	actual_len;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		actual_len = 0;
	else if (ft_strlen(s) - start > len)
		actual_len = len;
	else
		actual_len = ft_strlen(s) - start;
	buffer = malloc(actual_len + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < actual_len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
