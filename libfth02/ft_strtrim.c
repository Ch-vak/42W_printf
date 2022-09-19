/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:27:51 by cvakasir          #+#    #+#             */
/*   Updated: 2021/07/02 10:06:07 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static	int	check_for_element(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	int	check_for_start(char const *s1, char const *set)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (check_for_element(s1[i], set) == 1)
	{
		i++;
		count++;
	}
	if (i == (int)ft_strlen(s1))
		return (-1);
	else
		return (count);
}

static	int	check_for_end(char const *s1, char const *set)
{
	int	count;
	int	i;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (check_for_element(s1[i], set) == 1)
	{
		i--;
		count++;
	}
	if (i == (int)ft_strlen(s1))
		return (-1);
	else
		return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index_start;
	int		index_end;
	char	*result;
	int		allc;

	index_start = check_for_start(s1, set);
	index_end = check_for_end(s1, set);
	allc = (int)ft_strlen(s1) - index_end - index_start;
	result = (char *)malloc(sizeof(char) * ((size_t)allc + 1));
	if (!result)
		return (NULL);
	if (index_start == -1)
		return (result);
	if (index_end == -1)
		return (result);
	result = ft_memcpy (result, s1 + index_start, allc);
	result[allc] = '\0';
	return (result);
}
