/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:15:35 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 11:15:36 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	lst = (t_list*)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		lst->content = malloc(content_size);
		if (!(lst->content))
			return (NULL);
		ft_memcpy((lst->content), content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
