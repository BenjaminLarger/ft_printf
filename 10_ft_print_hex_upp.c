/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_ft_print_hex_upp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:57:52 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 13:35:06 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_hex_len(unsigned long long str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str)
	{
		count++;
		str >>= 4;
	}
	return (count);
}

char	*conv_to_hex_upp(int hex_len, unsigned long long ptr_val, char *hex_str)
{
	int	i;
	int	res;

	res = 0;
	i = hex_len - 1;
	while (i >= 0)
	{
		res = ptr_val % 16;
		if (res < 10)
			hex_str[i] = '0' + res;
		else
			hex_str[i] = 'A' + (res - 10);
		ptr_val = ptr_val / 16;
		i--;
	}
	hex_str[hex_len] = '\0';
	return (hex_str);
}

int	ft_print_hex_low(unsigned long long decimal)
{
	int					i;
	int					hex_len;
	char				*hex_str;

	hex_len = get_hex_len(decimal);
	hex_str = malloc((hex_len + 1) * sizeof(char));
	if (!hex_str)
		return ;
	conv_to_hex_upp(hex_len, decimal, hex_str);
	ft_putstr(hex_str);
	free(hex_str);
	return (hex_len);
}

/* int main()
{
	ft_print_hex_low(15);
} */