/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blarger <blarger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:57:19 by blarger           #+#    #+#             */
/*   Updated: 2023/12/11 14:06:52 by blarger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(int argc, char **argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		printf("insert input\n");
		return (0);
	}
	else
	{
		while (i <= argc)
		{
			printf("%s\n", argv[i]);
			ft_printf("%s\n", argv[i]);
			i++;
		}
		return (0);
	}
}
