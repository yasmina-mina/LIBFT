/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:07:07 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/07 15:39:45 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && i < n - 1) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%d\n", strncmp("bonjour", "bonsoir", 3));
	printf("%d\n", ft_strncmp("bonjour", "bonsoir", 3));
}*/
