/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:04:28 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/12 23:26:08 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *tmp_dest;
    unsigned char *tmp_src;

    tmp_dest = ((unsigned char *)dest);
    tmp_src = ((unsigned char *)src);
    i = 0;
    if (tmp_dest > tmp_src)
        while(n > 0)
        {
            n--;
            tmp_dest[n] = tmp_src[n];
        }
    else 
        {
            while (i < n)
            {
                tmp_dest[i] = tmp_src[i];
                i++;
            }
        }
    return (dest);
}

int main (void)
{
   const char *src = "bonjour tout le monde";
   char dest[40];
   
   memmove(dest, src, 5);
   printf("%s\n", dest);
   ft_memmove(dest, src, 5);
   printf("%s\n", dest);
}