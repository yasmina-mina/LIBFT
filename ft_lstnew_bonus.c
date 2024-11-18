/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:28:44 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/18 19:50:24 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list	*lstnew;
    
    lstnew = (t_list *)malloc(sizeof(t_list));
    if (lstnew == NULL)
        return (NULL);
    lstnew->content = content;
    lstnew->next = NULL;
    return (lstnew);
}