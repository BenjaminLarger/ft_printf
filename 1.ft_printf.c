/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.ft_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:15 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 13:13:03 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	input_type(char c, va_list input)
{
	if (c == 'c')
		return (ft_putchar(input));
	else if (c == 's')
		return (ft_putstr(input));
	else if (c == 'p')
		return (ft_ptr_to_hex(input));
	else if (c == 'd')
		return (ft_putnbr_dec(input));
	else if (c == 'i')
		return (ft_putnbr(input));
	else if (c == 'u')
		return (ft_putnbr_dec_unsigned(input));
	else if (c == 'x')
		return (ft_print_hex_low(input));
	else if (c == 'X')
		return (ft_print_hex_upp(input));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (NULL);
}

int	count_par(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 34)
	{
		if (str[i] == '%')
		{
			count++;
			i++;
		}
		i++;
	}
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 34 && str[i] != '\0')
		i++;
	if (str[i] == '\0' || str[0] != 34)
		return (0);
	return (1);
}

int	*ft_printf(char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			len += input_type(str[i++], args);
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
