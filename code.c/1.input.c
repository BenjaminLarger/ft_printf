/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.input.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:15 by blarger           #+#    #+#             */
/*   Updated: 2023/12/11 21:10:11 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*input_type(char c, void *input)
{
	if (c == 'c')
		return (ft_putchar(input));
	else if (c == 's')
		return (ft_putstr(input));
	else if (c == 'p')
		return (print_ptr(input));
	else if (c == 'd')
		return (ft_putnbr_dec(input));
	else if (c == 'i')
		return (ft_putnbr(input));
	else if (c == 'u')
		return (print_dec_base_unsigned_10(input));
	else if (c == 'x')
		return (print_hex_low(input));
	else if (c == 'X')
		return (print_hex_upp(input));
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

char	*ft_printf(char *str, ...)
{
	int		i;
	char	*arg;
	int		n;
	va_list	args;

	i = 0;
	if (is_valid(str) == 0)
		return (NULL);
	n = count_par(str);
	va_start(args, n);
	i = 0;
	while (i < n)
	{
		while (str[i] != 34)
		{
			arg = va_arg(args, char *);
			if (str[i] == '%')
				return (input_type(str[i++], arg));
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
}
