/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:03:20 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/14 23:05:57 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *string;
    int     i;
    int     j;
    
    i = 0;
    j = strlen(s1 - 1);
    if(s1 == 0 || set == 0)
        return(NULL);
    while(strchr(set, s1[i]) && i <= j)
        i++;
    while(strchr(set, s1[i]) && j )
        j --;
    string = (char*)malloc(sizeof(char) * j - i + 1);
    strncpy(string, &s1[i], j - i);
    return (string);
}

int main (void)
{
    printf("%s\n", ft_strtrim("ouuuuhoooobonjourhoouhoo", "ouh"));
}