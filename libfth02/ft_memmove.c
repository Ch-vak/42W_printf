/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:59:01 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/16 21:13:16 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char		*csrc;
	unsigned char			*cdest;

	csrc = (unsigned const char *)src;
	cdest = (unsigned char *)dest;
	if (cdest <= csrc)
	{
		while (n > 0)
		{
			*cdest++ = *csrc++;
			n--;
		}
	}
	else
	{
		cdest = cdest + n;
		csrc = csrc + n;
		while (n > 0)
		{
			*--cdest = *--csrc;
			n--;
		}
	}
	return (dest);
}
