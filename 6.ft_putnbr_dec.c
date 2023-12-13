/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6.ft_putnbr_dec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:44:09 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 13:28:00 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_dec(float n)
{
	int		integer_part;
	float	decimal_part;
	int		round_decimal;
	int		len;

	len = ft_len_int((int)ft_len_int);
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	integer_part = (int)n;
	ft_putnbr(integer_part);
	decimal_part = n - integer_part;
	round_decimal = (int)(decimal_part * 10 + 0.5);
	if (round_decimal > 0)
	{
		len++;
		ft_putchar('.');
		ft_putnbr(round_decimal);
	}
	return (len);
}

/* int main()
{
	ft_putnbr_dec(-0.35);
} */
