/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:37:07 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/14 18:18:00 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    char    *string;
    
    i = 0;
    string = (char *)malloc(sizeof(char) * len + 1);
    if (string == NULL)
        return (NULL);
    if (start > ft_strlen(s))
        return(NULL);
    while (len > 0)
    {
        string[i] = s[start];
        i++;
        start++;
        len--;
    }
    return(string);
}

/* int     main(void)
{
    printf("%s\n", ft_substr("bonjour tout le monde comment ca va?", 20, 10));
} */