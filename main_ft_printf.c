/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:27:20 by tayou             #+#    #+#             */
/*   Updated: 2023/01/23 17:47:11 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf/ft_printf.h"
#include <limits.h>
/*
int	main(void)
{
	int	return_printf;
	int return_ft_printf;

	return_printf = printf("%p\n%p\n", LONG_MIN, LONG_MAX);
	return_ft_printf = ft_printf("%p\n%p\n", LONG_MIN, LONG_MAX);

	return (0);
}
*/	
int	main(void)
{
	char			*name;
	void			*address;
	int				number;
	unsigned int	unsigned_number;
	int				return_printf;
	int				return_ft_printf;

	name = "Tom";
	address = name;
	number = -2147483648;
	unsigned_number = 0;
	return_printf = printf("%m, name: %s, address: %p, number: %d, unsigned_number: %u,\nhexa_number: %x, hexa_number: %X, percent_sign: %%\n", name, NULL, number, unsigned_number, unsigned_number, unsigned_number);
	return_ft_printf = ft_printf("%m, name: %s, address: %p, number: %d, unsigned_number: %u,\nhexa_number: %x, hexa_number: %X, percent_sign: %%\n", name, NULL, number, unsigned_number, unsigned_number, unsigned_number);

	printf("return_printf: %d\n", return_printf);
	printf("return_ft_printf: %d\n", return_ft_printf);

	return (0);
}
