/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_printf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:46:35 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 15:16:20 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_PRINTF_H
# define LIB_FT_PRINTF_H
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//Functions in order
int	ft_printf(char *str, ...);
int	input_type(char c, va_list input);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_ptr_to_hex(void *str);
int	ft_putnbr_dec(float n);
int	ft_putnbr(int n);
int	ft_putnbr_dec_unsigned(float n);
int	ft_print_hex_low(unsigned long long decimal);
int	ft_print_hex_up(unsigned long long decimal);
//Utils
int	ft_len_int(int n);
int	get_hex_len(unsigned long long str);

#endif
