/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:31:34 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/24 12:53:23 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static	size_t	ft_int_length(int n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	char	*handle_logic(char *str, size_t len, size_t num, int i)
{
	str[len] = '\0';
	len--;
	while ((int)len > 0)
	{
		str[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	if (i == 0)
		str[len] = num % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	num;
	char	*str;
	int		i;

	i = 0;
	num = (size_t)n;
	if (n == 0)
		len = 1;
	else
		len = ft_int_length(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		num = -num;
		i++;
	}
	str = handle_logic(str, len, num, i);
	return (str);
}
