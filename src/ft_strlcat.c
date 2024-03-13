/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:30:14 by jlinarez          #+#    #+#             */
/*   Updated: 2024/03/13 13:54:08 by jlinarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	dest_len = i;
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dest_len)
	{
		return (src_len + dstsize);
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dest_len + src_len);
}