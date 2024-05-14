/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbiz <rlabbiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:34:01 by rlabbiz           #+#    #+#             */
/*   Updated: 2022/10/25 20:34:01 by rlabbiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", len);
	else
	{
		if (nbr < 0)
		{
			ft_putchr('-', len);
			nbr *= -1;
		}
		if (nbr > 9)
		{
			ft_putnbr(nbr / 10, len);
			nbr %= 10;
		}
		ft_putchr(nbr + '0', len);
	}
}
