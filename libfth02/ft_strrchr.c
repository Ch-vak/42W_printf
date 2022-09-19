/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 10:53:05 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 16:26:09 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cs;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if ('\0' == (char) c)
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		cs = ft_strchr((char *)(s + i), c);
		if (cs != NULL)
			return ((char *)cs);
	}
	return (NULL);
}
