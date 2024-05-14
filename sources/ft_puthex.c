/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbiz <rlabbiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:11:09 by rlabbiz           #+#    #+#             */
/*   Updated: 2022/10/25 20:30:59 by rlabbiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char x, int *len)
{
	char	*base;

	if (x == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr < 16)
	{
		ft_putchr(base[nbr], len);
	}
	else
	{
		ft_puthex(nbr / 16, x, len);
		ft_puthex(nbr % 16, x, len);
	}
}
