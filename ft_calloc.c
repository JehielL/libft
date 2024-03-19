/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:21:06 by jlinarez          #+#    #+#             */
/*   Updated: 2024/03/19 12:25:12 by jlinarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t 	i;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	i = count * size;
	p = malloc(i);
	if (p == NULL)
	{
		return (NULL);
	}
	else
		ft_bzero(p, i);
	return (p);
}
