/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:06:27 by cvakasir          #+#    #+#             */
/*   Updated: 2021/07/04 11:03:19 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static	char	*ft_memcopy(char *dest, const char *src, size_t n, int i)
{
	unsigned char	*cdest;
	unsigned char	*csrc;
	int				j;

	j = 0;
	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	while (n > 0)
	{
		cdest[j] = csrc[i];
		i++;
		n--;
		j++;
	}
	cdest[j] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if ((size_t)start < ft_strlen(s))
	{
		ptr = ft_memcopy(ptr, s, len, (int)start);
	}
	else
	{
		ptr[0] = '\0';
	}
	return (ptr);
}
