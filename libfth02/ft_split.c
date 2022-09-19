/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:51:12 by cvakasir          #+#    #+#             */
/*   Updated: 2021/07/01 14:00:19 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static	size_t	tot_length(char const *s, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[count])
	{
		if (s[count] != c)
			i++;
		while (s[count] != c && s[count + 1])
			count++;
		count++;
	}
	return (i);
}

static	size_t	w_length(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static	void	my_free(char **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	w;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (tot_length(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (count < tot_length(s, c))
	{
		str[count] = (char *)malloc(sizeof(char) * (w_length (&s[i], c) + 1));
		if (!str[count])
			my_free (str, count);
		while (s[i] == c)
			i++;
		w = 0;
		while (s[i] != c && s[i])
			str[count][w++] = s[i++];
		str[count][w] = '\0';
		count++;
	}
	str[count] = 0;
	return (str);
}
