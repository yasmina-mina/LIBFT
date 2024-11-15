/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:28:46 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/14 17:54:26 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     j;
    int     k;
    char    *s3;

    i = 0;
    j = 0;
    k = 0;
    s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (s3 ==  NULL)
        return (NULL);
    while (s2[k])
    {
        while(s1[i])
        {
            s3[j] = s1[i];
            i++;
            j++;
        }
        s3[j] = s2[k];
        k++;
        j++;
    }
    s3[j] = '\0';
    return (s3);
}

/* int main(void)
{
    printf("%s", ft_strjoin("allo", " la terre"));
} */