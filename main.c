#include "ft_printf.h"
#include "get_next_line_bonus.h"

int main()
{
	ft_printf("%s\n","chaussettes");
	ft_putstr("chaussettes\n");
	int fd = open("texte.txt",O_RDONLY);
	char *line ;
	line = get_next_line(fd);
	ft_printf("%s\n",line);
}