/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.input.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:23:15 by blarger           #+#    #+#             */
/*   Updated: 2023/12/11 14:52:02 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*input_type(char c, void *input)
{
	if (c == 'c')
		return(print_char(input));
	else if (c == 's')
		return (print_str(input));
	else if (c == 'p')
		return (print_dec(input));
	else if (c == 'i')
		return (print_int_base_10(input));
	else if (c == 'u')
		return (print_dec_base_10(input));
	else if (c == 'x')
		return (print_hex_min(input));
	else if (c == 'X')
		return (c == '%');
}

char	*user_input(char *str, ...)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] != 34)
		return (NULL);
	while (str[0] != 34 && str[i] != '\0')
		i++;
	if (str[i] == '\0' || str[0] != 34)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != 34)
	{
		if (str[i] == '%')
			return (input_type(str[i + 1], ...));
		i++;
	}
}
