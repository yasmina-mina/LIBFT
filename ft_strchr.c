/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:58:50 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/11 14:10:13 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == '\0')
            return (0);
        else if (s[i] != c)
            i++;
        else
        break;
    }
    return (&s[i]);
}

/*int main (void)
{
    char *src;
    int chr;

    src = "Bonjour";
    chr = '0';
    printf("%s\n", ft_strchr(src, chr));
    printf("%s\n", strchr(src, chr));
}*/