/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:01:20 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/19 16:29:19 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* int main (void)
{
	t_list *essai;
	t_list *essai1;
	t_list *essai2;
	t_list *essai3;
	t_list *essai4;

	essai->next = essai1;
	essai1->next = essai2;
	essai2->next = essai3;
	essai3->next = essai4;
	essai4->next = NULL;
	printf("%d\n", ft_lstsize(essai));
} */