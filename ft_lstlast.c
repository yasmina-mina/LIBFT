/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:32:15 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:34 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstlast(t_list *lst)
{
	t_list	*last;
	
	while (lst != NULL)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}