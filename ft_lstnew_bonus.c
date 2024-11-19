/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:28:44 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/19 15:27:15 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*noeud;

	noeud = (t_list *)malloc(sizeof(t_list));
	if (noeud == NULL)
		return (NULL);
	noeud->content = content;
	noeud->next = NULL;
	return (noeud);
}

int	main(void)
{
	t_list	*bonjour;

	bonjour = ft_lstnew((void *)"truc");
	printf("%s\n", (char *)bonjour->content);
}
