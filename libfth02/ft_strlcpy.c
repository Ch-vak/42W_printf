/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:18:11 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 16:14:55 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*csrc;
	int		i;

	csrc = (char *)src;
	i = ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	while (size - 1 > 0 && i > 0)
	{
		*dst++ = *csrc++;
		size--;
		i--;
	}
	*dst = '\0';
	return (ft_strlen(src));
}
