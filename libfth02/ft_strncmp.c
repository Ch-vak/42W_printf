/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:36:35 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/24 14:25:37 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				in;

	in = 0;
	str2 = (unsigned const char *)s2;
	str1 = (unsigned const char *)s1;
	while (str1[in] && in < n)
	{
		if (str2[in] != str1[in])
			return (str1[in] - str2[in]);
		in++;
	}
	if (0 != n && n == in)
		return (str1[n - 1] - str2[n - 1]);
	else if (n == 0)
		return (0);
	return (str1[in] - str2[in]);
}
