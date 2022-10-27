#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
void ft_putchr(char c, int *len);
void ft_putstr(char *str, int *len);
void ft_putnbr(int nbr, int *len);
void ft_puthex(unsigned int nbr, char c, int *len);
void ft_putadd(void *nbr, int *len);
void ft_putnbr_un(unsigned int nbr, int *len);

#endif