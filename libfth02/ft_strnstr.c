/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:32:20 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 17:18:43 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcomp(void *dest, const void *src, size_t n)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	int				flag;

	flag = 0;
	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	if (ft_strlen((const char *)cdest) < n)
		return (1);
	while (n > 0)
	{
		if (*cdest++ != *csrc++)
		{
			flag = 1;
		}
		n--;
	}
	if (flag == 0)
	{
		return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	len_s1;
	int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(*s2))
		return ((char *)s1);
	while (n > 0)
	{
		if (len_s2 > len_s1)
			return (NULL);
		if ((int)n < len_s2)
			return (NULL);
		if (ft_memcomp((char *)s1, s2, (size_t)len_s2) == 0)
			return ((char *)s1);
		n--;
		s1++;
	}
	return (NULL);
}
