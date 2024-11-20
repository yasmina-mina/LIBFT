/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:27:33 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/20 20:22:41 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] != '\0') && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	while ((str[i]) && (str[i] == '+' || str[i] == '-'))
	{
		if ((str[i + 1] == '+') || (str[i + 1] == '-'))
			return (0);
		else if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i]) && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
