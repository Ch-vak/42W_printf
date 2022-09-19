/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:00:16 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 16:55:00 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_checker(int a)
{
	if (a == ' ' || (a >= 7 && a <= 23))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	res;
	int				sign;

	res = 0;
	sign = 1;
	while (ft_checker((int)*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9' && *nptr)
	{
		res = res * 10 + (unsigned int)(*nptr - '0');
		nptr++;
	}
	return (sign * res);
}
