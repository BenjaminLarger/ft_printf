/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.ft_putnbr_dec_unsigned.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:27:50 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 13:32:14 by blarger          ###   ########.fr       */
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

int	ft_putnbr_dec_unsigned(float n)
{
	int		integer_part;
	float	decimal_part;
	int		round_decimal;
	int		len;

	if (n < 0)
		return (0);
	len = ft_len_int(n);
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
	float num = 0.34;
	ft_putnbr_dec_unsigned(num);
} */