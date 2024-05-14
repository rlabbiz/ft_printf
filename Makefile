NAME  = libftprintf.a
OBJECT = sources/ft_printf.o sources/ft_putstr.o sources/ft_putchr.o sources/ft_putnbr.o sources/ft_putnbr_unsigned.o sources/ft_puthex.o sources/ft_putadd.o
DEFS = includes/ft_printf.h
CC = cc

#  color difinitions
RED = "\033[0;31m"
GREEN = "\033[0;32m"
YELLOW = "\033[0;33m"
BLUE = "\033[0;34m"
MAGENTA = "\033[0;35m"
CYAN = "\033[0;36m"
RESET = "\033[0m"

%.o: %.c $(DEFS)
	@$(CC) -c -o $@ $< -Wall -Wextra -Werror
	@echo $(YELLOW) "[+] Compiled..." $< $(RESET)

all: $(NAME)

$(NAME): $(OBJECT)
	@ar rsc $(NAME) $(OBJECT)
	@echo $(GREEN) "[+] Compiled..." $(NAME) $(RESET)

clean:
	@rm -rf sources/*.o
	@echo $(RED) "[-] Remove object files" $(RESET)

fclean: clean
	@rm -rf $(NAME)
	@echo $(RED) "[-] Remove " $(NAME) $(RESET)

re: fclean all