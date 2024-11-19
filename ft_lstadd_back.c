/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:01:23 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/19 18:13:03 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst && (*lst)->next)
	{
		*lst = (*lst)->next;
	}
	(*lst)->next = new;
}

int main (void)
{

	t_list *head;
	t_list *node;
	
	head = ft_lstnew((void *)"content");
	node = ft_lstnew((void *)"content");

	ft_lstadd_back(&head, node);
	while (head)
	{
		printf("%p\n", head);
		printf("%p\n", head->next);
		head = head->next;
	}
	
}