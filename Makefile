NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
OBJDIR = dest
INCLUDES = headers

# Liste des fichiers .c (chemins relatifs)
CFILES := $(shell find $(SRCDIR) -type f -name "*.c")

# Transforme les chemins .c en chemins .o dans le dossier OBJDIR
OFILES := $(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(CFILES:.c=.o))

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

# Règle de compilation des .o
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
