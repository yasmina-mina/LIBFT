/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:09:50 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/14 17:38:28 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dst_l;
	unsigned int	src_l;
	unsigned int	i;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	if (size > dst_l)
	{
		while (src[i] && i < size - 1 - dst_l)
		{
			dst[dst_l + i] = src[i];
			i++;
		}
		dst[dst_l + i] = '\0';
		return (dst_l + src_l);
	}
	return (src_l + size);
}

/* int main (void)
{
   char dest[200] = "Bonjour";
   char *src = "tout le monde";
   printf("%zu\n", ft_strlcat(dest, src, 9));
} */