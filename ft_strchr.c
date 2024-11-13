/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:58:50 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/13 01:26:23 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (&((char *)s)[i]);
        i++;
    }
    return (NULL);
}

/*int main (void)
{
    char *src;
    int chr;

    src = "Bonjour";
    chr = 'w';
    printf("%s\n", ft_strchr(src, chr));
    printf("%s\n", strchr(src, chr));
}*/