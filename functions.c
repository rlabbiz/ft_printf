#include "printf.h"

void ft_putchr(char c, int *len){
    write(1, &c, 1);
    *len += 1;
}

void ft_putstr(char *str, int *len){
    int i = 0;
    while (str[i] != '\0'){
        write(1, &str[i], 1);
        *len += 1;
        i++;
    }
}

void ft_putnbr(int nbr, int *len){
    if (nbr < 0){
        ft_putchr('-', len);
        nbr *= -1;
    }
    if (nbr < 10){
        ft_putchr(nbr + '0', len);
    } else {
        ft_putnbr(nbr / 10, len);
        ft_putnbr(nbr % 10, len);
    }
}

void ft_putnbr_un(unsigned int nbr, int *len){
    if (nbr < 10){
        ft_putchr(nbr + '0', len);
    } else {
        ft_putnbr(nbr / 10, len);
        ft_putnbr(nbr % 10, len);
    }
}

void ft_puthex(unsigned int nbr, char c, int *len){
    char *base;
    if (c == 'X')
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    if (nbr < 16)
        ft_putchr(base[nbr], len);
    else {
        ft_puthex(nbr / 16, c, len);
        ft_puthex(nbr % 16, c, len);
    }
}

void ft_puthex_add(unsigned long long nbr, int *len){
    char *base = "0123456789abcdef";
    if (nbr < 16)
        ft_putchr(base[nbr], len);
    else {
        ft_puthex_add(nbr / 16, len);
        ft_puthex_add(nbr % 16, len);
    }
}

void ft_putadd(void *nbr, int *len){
   ft_putstr("0x", len);
   ft_puthex_add((unsigned long long)nbr, len);
}