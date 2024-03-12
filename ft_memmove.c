/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:57:38 by jlinarez          #+#    #+#             */
/*   Updated: 2024/03/12 16:29:37 by jlinarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* int	main()
{
	char src[] = "Hello,World";
	char dst[5];

	ft_memmove(dst, src, 6);
	printf("Cadena copiada: %s\n", dst);
	return (0);
}

*/
