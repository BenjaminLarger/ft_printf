/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:46:35 by blarger           #+#    #+#             */
/*   Updated: 2023/12/13 11:56:48 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);

#endif
