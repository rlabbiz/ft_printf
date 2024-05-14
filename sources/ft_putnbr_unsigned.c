/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbiz <rlabbiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:59:26 by rlabbiz           #+#    #+#             */
/*   Updated: 2022/10/25 20:31:49 by rlabbiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, len);
		nbr %= 10;
	}
	ft_putchr(nbr + '0', len);
}
