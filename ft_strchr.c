/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:58:50 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/13 18:48:02 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char)c;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	if (c == '\0')
		return (&((char *)s)[i]);
	return (NULL);
}

/* int	main(void)
{
	char    *src;
	int chr;

	src = "Bon\0jour";
	chr = '\0';
	printf("ft_strchr %s\n", ft_strchr(src, chr));
	printf("vrai strchr %s\n", strchr(src, chr));
} */