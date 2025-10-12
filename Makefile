NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SOURCES = ft_printf.c ft_printutils.c ft_printutils_ex.c ft_uitoa.c ft_printutils_add.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C libft/
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	rm -rf $(OBJECTS)
	make clean -C libft
fclean: clean
	rm -rf $(NAME)
	make fclean -C libft
re: fclean all

.PHONY: all clean fclean re
