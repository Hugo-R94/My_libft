/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:07:29 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 17:51:50 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*new_str;

	index = 0;
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[index])
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

// int main(int argc, char **argv)
// {
// 	int	index = 1;
// 	if (argc < 0)
// 		return(0);
// 	while (index < argc)
// 	{
// 		printf("%s", ft_strmapi(argv[index], to_upper));
// 		printf(" ");
// 		index++;
// 	}
// }
// int main()
// {
// 	strcpy(str, "LoReM iPsUm");
//     strmapi = ft_strmapi(str, &mapi);
//     ft_print_result(strmapi);
//     if (strmapi == str)
//         ft_print_result("\nA new string was not returned");
//     if (strmapi[11] != '\0')
//         ft_print_result("\nString is not null terminated");
// }