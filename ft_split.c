/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenigno <ybenigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:38:47 by ybenigno          #+#    #+#             */
/*   Updated: 2024/11/15 20:25:31 by ybenigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_c(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*split_word(char const *s, char c)
{
	char	*split_word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c)
		i++;
	split_word = malloc(sizeof(char) * i + 1);
	if (split_word == NULL)
		return (NULL);
	while (j < i)
	{
		split_word[j] = s[j];
		j++;
	}
	split_word[j] = '\0';
	return (split_word);
}

char	**ft_split(char const *s, char c)
{
	char	**big_array;
	int		count;
	int		i;

	i = 0;
	count = count_c(s, c);
	big_array = malloc((sizeof(char *) * count) + 1);
	if (!big_array)
		return (NULL);
	while (*s)
	{
		if (*s && *s == c)
			s++;
		if (*s)
		{
			big_array[i++] = split_word(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	big_array[i] = NULL;
	return (big_array);
}
/* int	main(void)
{
	printf("Test de ft_split:\n\n");
	int lensplit = 0;
	int isplit;
	char const *str_to_split = "Bonjour_comment_ca_va_???_";
	char sep = '_';
	char **tab = ft_split(str_to_split, sep);

	while (tab[lensplit])
		lensplit++;

	printf("Test de ft_split sur la chaine [%s] avec comme separateur [%c]:\n",
		str_to_split, sep);
	printf("        RÃ©sultat : [");
	for (isplit = 0; isplit < lensplit; isplit++)
	{
		printf("\"%s\"", tab[isplit]);
		if (isplit != lensplit - 1)
			printf(", "); */