NAME = libft.a

CC = cc

SRCDIR = srcs
OBJDIR = objs
INCLUDES = headers

CFLAGS = -Wall -Werror -Wextra

CFILES = $(SRCDIR)/ft_atoi.c \
         $(SRCDIR)/ft_bzero.c \
         $(SRCDIR)/ft_calloc.c \
         $(SRCDIR)/ft_isalnum.c \
         $(SRCDIR)/ft_isalpha.c \
         $(SRCDIR)/ft_isascii.c \
         $(SRCDIR)/ft_isdigit.c \
         $(SRCDIR)/ft_isprint.c \
         $(SRCDIR)/ft_itoa.c \
         $(SRCDIR)/ft_memchr.c \
         $(SRCDIR)/ft_memcmp.c \
         $(SRCDIR)/ft_memcpy.c \
         $(SRCDIR)/ft_memmove.c \
         $(SRCDIR)/ft_memset.c \
         $(SRCDIR)/ft_putchar_fd.c \
         $(SRCDIR)/ft_putendl_fd.c \
         $(SRCDIR)/ft_putnbr_fd.c \
         $(SRCDIR)/ft_putstr_fd.c \
         $(SRCDIR)/ft_split.c \
         $(SRCDIR)/ft_strdup.c \
         $(SRCDIR)/ft_striteri.c \
         $(SRCDIR)/ft_strjoin.c \
         $(SRCDIR)/ft_strlcat.c \
         $(SRCDIR)/ft_strlcpy.c \
         $(SRCDIR)/ft_strlen.c \
         $(SRCDIR)/ft_strmapi.c \
         $(SRCDIR)/ft_strncmp.c \
         $(SRCDIR)/ft_strnstr.c \
         $(SRCDIR)/ft_strchr.c \
         $(SRCDIR)/ft_strrchr.c \
         $(SRCDIR)/ft_strtrim.c \
         $(SRCDIR)/ft_substr.c \
         $(SRCDIR)/ft_tolower.c \
         $(SRCDIR)/ft_toupper.c \
         $(SRCDIR)/ft_printf.c \
         $(SRCDIR)/ft_putall.c \
         $(SRCDIR)/ft_lstnew_bonus.c \
         $(SRCDIR)/ft_lstadd_front_bonus.c \
         $(SRCDIR)/ft_lstsize_bonus.c \
         $(SRCDIR)/ft_lstlast_bonus.c \
         $(SRCDIR)/ft_lstadd_back_bonus.c \
         $(SRCDIR)/ft_lstdelone_bonus.c \
         $(SRCDIR)/ft_lstclear_bonus.c \
         $(SRCDIR)/ft_lstiter_bonus.c \
         $(SRCDIR)/ft_lstmap_bonus.c \
         $(SRCDIR)/get_next_line.c \
         $(SRCDIR)/get_next_line_utils.c \
         $(SRCDIR)/get_next_line_bonus.c \
         $(SRCDIR)/get_next_line_utils_bonus.c

OFILES = $(CFILES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
