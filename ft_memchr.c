/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:43:26 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/12 11:25:38 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == c)
           
    }
    return ();
}

int main () 
{
   const char str[] = "Tutorialspoint";
   const char ch = '.';
   char *ret;
   ret = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}