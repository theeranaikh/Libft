/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhunhan <tkhunhan@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 18:09:13 by tkhunhan          #+#    #+#             */
/*   Updated: 2026/08/29 18:14:46 by tkhunhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len > 0)
	{
		*ptr = value;
		ptr++;
		len--;
	}
	return (b);
}
