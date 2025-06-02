#include "headers/libft.h" // ou un header contenant le prototype de ft_print_bit
#include <stdio.h> // optionnel, pour debug

// int main(void)
// {
// 	unsigned char i = ft_swap_bits(53); // 55 = 0b00110111
// 	ft_print_bit(i);  // affiche 4 bits inversés avec les 4 autres
// 	return (0);
// }
int main(void)
{
    unsigned char val = 55; // 0b00110111
    unsigned char reversed = ft_reverse_bits(val);

    ft_printf("Original bits: ");
    ft_print_bit(val);
    ft_printf("\nReversed bits: ");
    ft_print_bit(reversed);
    ft_printf("\n");

    ft_printf("Original decimal: %d\n", val);
    ft_printf("Reversed decimal: %d\n", reversed);

    return 0;
}
