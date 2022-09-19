/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:12:20 by cvakasir          #+#    #+#             */
/*   Updated: 2021/07/02 10:39:20 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*ptr;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	res = ptr;
	while (lst != NULL)
	{
		ptr->next = (t_list *)malloc(sizeof(t_list));
		ptr->content = f(lst->content);
		temp = ptr;
		lst = lst->next;
		ptr = ptr->next;
	}
	temp->next = NULL;
	del(ptr);
	free(ptr);
	return (res);
}
