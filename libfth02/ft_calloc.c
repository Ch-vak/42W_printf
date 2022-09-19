/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:42:49 by cvakasir          #+#    #+#             */
/*   Updated: 2021/07/04 11:02:21 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t nsize)
{
	void	*ptr;

	ptr = malloc(nsize * num);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num * nsize);
	return (ptr);
}
