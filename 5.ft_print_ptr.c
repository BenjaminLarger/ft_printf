/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5.ft_print_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:24:48 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 10:39:34 by blarger          ###   ########.fr       */
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
		str >>= 4; // 2 puissance 4 = 16 => bitewise shift
	}
	return (count);
}

char	*convert_to_hex(int hex_len, unsigned long long ptr_val, char *hex_str)
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
			hex_str[i] = 'a' + (res - 10);
		ptr_val = ptr_val / 16;
		i--;
	}
	hex_str[hex_len] = '\0';
	printf("hex_str =%s\n", hex_str);
	return (hex_str);
}

void	ft_ptr_to_hex(void *str)
{
	int					i;
	int					hex_len;
	unsigned long long	ptr_val;
	char				*hex_str;

	if (!str)
		return ;
	hex_len = get_hex_len((unsigned long long)str);
	hex_str = malloc((hex_len + 1) * sizeof(char));
	if (!hex_str)
		return ;
	ptr_val = (unsigned long long)str;
	convert_to_hex(hex_len, ptr_val, hex_str);
	ft_putstr("Ox");
	ft_putstr(hex_str);
	free(hex_str);
}

/* int main()
{
	char *str = "Hello World";
	ft_ptr_to_hex(str);
} */