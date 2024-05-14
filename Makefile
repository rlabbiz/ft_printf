NAME  = libftprintf.a
OBJECT = sources/ft_printf.o sources/ft_putstr.o sources/ft_putchr.o sources/ft_putnbr.o sources/ft_putnbr_unsigned.o sources/ft_puthex.o sources/ft_putadd.o
DEFS = libftprintf.h
CC = cc

%.o: %.c $(DEFS)
	$(CC) -c -o $@ $< -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	ar rsc $(NAME) $(OBJECT)

clean:
	rm -rf sources/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all