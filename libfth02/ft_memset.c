/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:03:04 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/16 18:30:41 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{	
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = (unsigned char)c;
		a++;
		n--;
	}
	return ((void *)s);
}
