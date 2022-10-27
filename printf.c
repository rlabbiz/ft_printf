#include "printf.h"

int ft_printf(const char *str, ...){
    int i = 0;
    int len = 0;
    va_list ap;
    va_start(ap, str);
    while (str[i] != '\0'){
        if (str[i] == '%'){
            i++;
            if (str[i] == '%')
                ft_putchr(str[i], &len);
            else if (str[i] == 'c')
                ft_putchr(va_arg(ap, int), &len);
            else if (str[i] == 's')
                ft_putstr(va_arg(ap, char *), &len);
            else if (str[i] == 'd' || str[i] == 'i')
                ft_putnbr(va_arg(ap, int), &len);
            else if (str[i] == 'x' || str[i] == 'X')
                ft_puthex(va_arg(ap, unsigned int), str[i], &len);
            else if (str[i] == 'u')
                ft_putnbr_un(va_arg(ap, unsigned int), &len);
            else if (str[i] == 'p')
                ft_putadd(va_arg(ap, void *), &len);
        } else {
            ft_putchr(str[i], &len);
        }
        i++;
    }
    return (len);
}