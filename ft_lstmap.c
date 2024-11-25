/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:14:06 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/25 16:08:43 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;
	void	*p;

	tmp = NULL;
	while (lst)
	{
		p = f(lst->content);
		head = ft_lstnew(p);
		if (!head)
		{
			ft_lstclear(&tmp, del);
			del(p);
			return (NULL);
		}
		ft_lstadd_back(&tmp, head);
		lst = lst->next;
	}
	return (tmp);
}
