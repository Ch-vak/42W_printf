/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:17:58 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/24 09:36:06 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static	char	*ft_strl_first_copy(char *dst, char *src, size_t size, int i)
{
	char	*csrc;
	int		j;

	j = 0;
	csrc = (char *)src;
	while (size > 0)
	{
		dst[j] = csrc[i];
		size--;
		i++;
		j++;
	}
	return (dst);
}

static	char	*ft_strl_second_copy(char *dst, char *src, size_t size, int i)
{
	char	*csrc;
	int		j;

	j = 0;
	csrc = (char *)src;
	while (size > 0)
	{
		dst[i] = csrc[j];
		size--;
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr = ft_strl_first_copy(ptr, (char *)s1, ft_strlen(s1), 0);
	ptr = ft_strl_second_copy(ptr, (char *)s2, ft_strlen(s2), ft_strlen(s1));
	return (ptr);
}
