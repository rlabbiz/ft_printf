NAME = printf.a
OBJECT = printf.o functions.o 
LIB = printf.h

all: $(NAME)

%.o: %.c $(LIB)
	gcc -c -o $@ $< -Wall -Wextra -Werror

$(NAME): $(OBJECT)
	ar rsc $(NAME) $(OBJECT)

clean:
	rm -rf *.o
	rm -rf a.out
	rm -rf $(NAME)

re: $(NAME)
	gcc -lm main.c $(NAME)