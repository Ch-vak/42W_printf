/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:29:51 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 16:08:38 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	int				i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if ((int)n == 0)
	{
		return (0);
	}
	while (i < (int)n)
	{
		if (*(ss1 + i) != *(ss2 + i))
		{
			return ((int)(ss1[i] - ss2[i]));
		}
		i++;
	}
	return (0);
}
