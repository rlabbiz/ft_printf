/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbiz <rlabbiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:25:06 by rlabbiz           #+#    #+#             */
/*   Updated: 2022/10/26 18:26:53 by rlabbiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *content, ...);
void	ft_putchr(char c, int *len);
void	ft_putnbr_unsigned(unsigned int nbr, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putstr(char *str, int *len);
void	ft_puthex(unsigned int nbr, char x, int *len);
void	ft_putadd(void *add, int *len);

#endif