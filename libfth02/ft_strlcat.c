/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:12:17 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 16:18:31 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	len_dst;
	int	j;
	int	i;

	i = 0;
	j = 0;
	len_dst = (int) ft_strlen(dst);
	if ((int)size > len_dst && size > 0)
	{
		i = len_dst;
		while (src[j] != '\0' && (int)size - 1 > i)
		{
			dst[i] = (char)src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len_dst + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
