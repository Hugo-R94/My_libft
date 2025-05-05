/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:06:20 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/05 11:39:38 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **str, int index)
{
	while (--index >= 0)
		free(str[index]);
	free(str);
}

int	ft_count_words(char *str, char sep)
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (str[index] == sep)
		index++;
	while (str[index])
	{
		if (str[index] != sep)
		{
			count++;
			while (str[index] && str[index] != sep)
				index++;
		}
		else
			while (str[index] && str[index] == sep)
				index++;
	}
	return (count);
}

int	ft_splitcpy(char *str, int index, char sep, char **str_arr)
{
	int	size;
	int	i;

	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (!*str)
			break ;
		size = 0;
		while (str[size] && str[size] != sep)
			size++;
		str_arr[index] = malloc(size + 1);
		if (!str_arr[index])
		{
			ft_free(str_arr, index);
			return (0);
		}
		i = 0;
		while (i < size)
			str_arr[index][i++] = *str++;
		str_arr[index++][i] = '\0';
	}
	str_arr[index] = NULL;
	return (1);
}

char	**ft_split(char *str, char c)
{
	char	**split_array;
	int		index;

	index = 0;
	split_array = malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (!split_array)
		return (NULL);
	if (!ft_splitcpy(str, index, c, split_array))
		return (NULL);
	return (split_array);
}

// int	main(void)
// {
// 	char **splitresult;
// 	char 	*tosplit = "      le la lo li lililo                       ";
// 	char	sep = ' ';
// 	int index = 0;
// 	printf("count words = %i\n",ft_count_words(tosplit,sep));
// 	splitresult = ft_split("hello!", ' ');
// 	while (splitresult[index] != NULL)
// 	{
// 		printf("%s\n",splitresult[index]);
// 		index++;
// 	}
// 	while (index-- > 0)
// 		free(splitresult[index]);
// 	free(splitresult);
// }
