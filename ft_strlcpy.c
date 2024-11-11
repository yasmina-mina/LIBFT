/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:23:19 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/11 14:16:05 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    unsigned int i;

    i = 0;
    while (src[i] && (i < size - 1))
    {
        dst[i] = src[i];
        i ++;
    }
    dst[i] = '\0';
    return (i);
}

/*int main (void)
{
    char dest[10];
    char *src;

    src = "bonjour";
    printf("%zu\n", ft_strlcpy (dest, src, sizeof(dest)));
}*/