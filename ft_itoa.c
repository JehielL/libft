/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlinarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 08:35:01 by jlinarez          #+#    #+#             */
/*   Updated: 2024/03/25 08:35:18 by jlinarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number <= 0)
		length = 1;
	else
		length = 0;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	char			*str;
	unsigned long	number;

	length = ft_number_size(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	number = 0;
	if (n < 0)
		number = -(long)n;
	else
		number = n;
	while (length > 0)
	{
		str[--length] = (number % 10) + '0';
		number /= 10;
	}
	if (n < 0 && length == 0)
		str[0] = '-';
	return (str);
}
