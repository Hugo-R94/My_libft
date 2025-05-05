/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:33:34 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/05 11:39:17 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int size)
{
	int				index;
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	index = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (index < size)
	{
		destination[index] = source[index];
		index++;
	}
	return (destination);
}

// int main() {
//     char src[20] = "memmove test";
//     char *dest1 = 0;
//     char *dest2 = 0;

//     int size = 5;

//     // // Test avec la fonction standard
//     memcpy(((void*)0), ((void*)0), size);

//     // Test avec ft_memmove
//     ft_memcpy(((void*)0), ((void*)0), size);

//     // Affichage des résultats
//     printf("memmove   : %s\n", dest1);
//     printf("ft_memmove: %s\n", dest2);

//     // Vérification avec memcmp
//     if (memcmp(dest1, dest2, size) == 0) {
//         printf("✅ Les deux memcpy donnent le même résultat !\n");
//     } else {
//         printf("❌ Il y a une différence entre memcpy et ft_memcpy !\n");
//     }

//     return 0;
// }