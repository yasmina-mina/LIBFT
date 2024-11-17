/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:24:20 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/16 23:54:19 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
    char    *s1;

    i = 0;
    s1 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!s1)
        return(NULL);
    while (i < ft_strlen(s))
    {
        s1[i] = (*f)(i, s[i]);
        i++;
    }
    s1[i] = '\0';
    return(s1);
}