/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:21:32 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/13 20:32:54 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while ((big[i + j] == little[j]) && (big[i + j] && little[j]) && (i
				+ j < len))
			j++;
		if (little[j] == '\0')
			return (&((char *)big)[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
