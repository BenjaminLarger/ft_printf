/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7.ft_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:04:57 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 13:30:23 by blarger          ###   ########.fr       */
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

int	ft_putnbr(int n)
{
	char	temp;
	int		len;

	len = ft_len(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		temp = n + '0';
		write(1, &temp, 1);
	}
	return (len);
}
