/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:24:32 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/19 15:24:38 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int c)
{
	int	i;

	i = 0;
	if (c == 0)
		i++;
	if (c < 0)
	{
		i++;
		c = -c;
	}
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

static char	*res_str(char *str, int n, int len, int i)
{
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[len - 1] = ((n % 10) + '0');
		n = n / 10;
		len--;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	len = int_len(n);
	i = len;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		str[len - 1] = '8';
		n = n / 10;
		len--;
	}
	if (n == 0)
		str = res_str(str, n, len, i);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	if (n > 0)
		str = res_str(str, n, len, i);
	return (str);
}

/* int main(void)
{
	printf("%s\n", ft_itoa(237374749));
	printf("%s \n", ft_itoa(-198877));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
} */
