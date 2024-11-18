/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:00:19 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/14 15:52:53 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total_size;

	// Check for potential overflow 
	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL); // Return NULL if overflow occurs

	// Calculate the total size to allocate
	total_size = nmemb * size;

	// Allocate memory
	tab = malloc(total_size);
	if (tab == NULL)
		return (NULL);

	// Zero out the allocated memory using ft_memset
	ft_memset(tab, 0, total_size);

	return (tab);
}
