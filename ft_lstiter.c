/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:04:28 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/21 20:44:05 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!f)
		return;
	while(lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	//return ;
}