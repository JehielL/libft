/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:26:39 by jlinarez          #+#    #+#             */
/*   Updated: 2024/03/19 13:48:48 by jlinarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i > 0)
	{
		str[i - 1] = s[i - 1];
		i--;
	}
	str[ft_strlen(s)] = '\0';
	return (str);
}
