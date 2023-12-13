/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.ft_putnbr_dec_unsigned.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:27:50 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 11:38:24 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_dec_unsigned(float n)
{
	int		integer_part;
	float	decimal_part;
	int		round_decimal;

	if (n < 0)
		return ;
	integer_part = (int)n;
	ft_putnbr(integer_part);
	decimal_part = n - integer_part;
	round_decimal = (int)(decimal_part * 10 + 0.5);
	if (round_decimal > 0)
	{
		ft_putchar('.');
		ft_putnbr(round_decimal);
	}
}

/* int main()
{
	float num = 0.34;
	ft_putnbr_dec_unsigned(num);
} */