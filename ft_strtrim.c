/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:03:20 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/25 19:57:02 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*s2;
	int		len_s2;

	i = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_skip_set(s1[i], set))
		i++;
	while (j > i && ft_skip_set(s1[j - 1], set))
		j--;
	len_s2 = j - i;
	s2 = (char *)malloc(sizeof(char) * len_s2 + 1);
	if (!s2)
		return (NULL);
	while (k < len_s2)
		s2[k++] = s1[i++];
	s2[k] = '\0';
	return (s2);
}
