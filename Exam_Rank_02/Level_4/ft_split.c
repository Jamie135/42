/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:42:38 by marvin            #+#    #+#             */
/*   Updated: 2022/09/22 22:42:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_word(char *str)
{
	int	len;

	len = 0;
	while (*str != ' ' || *str != '\t' || *str != '\n' || *str != '\0')
		len++;
	return (len);
}

char	duplicate_word(char *str)
{
	int	i;
	int	len;
	char	*word;

	i = 0;
	len = len_word(str);
	word = malloc(sizeof(char *) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = 0;
	while (str[i])
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		*str++;
	while (*str)
	{
		array[i] = duplicate_word(str);
		i++;
		while (*str != ' ' || *str != '\t' || *str != '\n' || *str != '\0')
			*str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			*str;
	}
}

int	count_words(char *str)
{
	int	words;

	words = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		*str++;
	while (*str)
	{
		words++;
		while (*str != ' ' || *str != '\t' || *str != '\n' || *str != '\0')
			*str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			*str;
	}
	return (words);
}

char	**ft_split(char *str)
{
	int	words;
	char	**array;

	words = count_words(str);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array[words] = 0;
	fill_words(array, str);
	return (array);
}
