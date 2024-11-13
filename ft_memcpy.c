/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:06:01 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/13 11:36:04 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main (void)
{
   const char src[50] = "Tutorialspoint";
   char dest[50];

   memcpy(dest, src, 4);
   printf("After memcpy dest = %s\n", dest);

   ft_memcpy(dest, src, 4);
   printf("ft_memcpy : %s\n", dest);
}*/