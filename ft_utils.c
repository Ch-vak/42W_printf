/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:47:27 by cvakasir          #+#    #+#             */
/*   Updated: 2022/06/23 09:53:31 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
