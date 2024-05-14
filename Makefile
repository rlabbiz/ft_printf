NAME  = libftprintf.a
OBJECT = ft_printf.o ft_putstr.o ft_putchr.o ft_putnbr.o ft_putnbr_unsigned.o ft_puthex.o ft_putadd.o
DEFS = libftprintf.h
CC = cc

%.o: %.c $(DEFS)
	$(CC) -c -o $@ $< -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	ar rsc $(NAME) $(OBJECT)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all