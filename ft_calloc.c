/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:00:19 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/20 18:33:00 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total_size;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	total_size = nmemb * size;
	tab = malloc(total_size);
	if (tab == NULL)
		return (NULL);
	ft_memset(tab, 0, total_size);
	return (tab);
}
