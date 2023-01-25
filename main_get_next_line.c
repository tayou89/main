/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:33:52 by tayou             #+#    #+#             */
/*   Updated: 2023/01/26 04:53:45 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line/get_next_line.h"

int	main(void)
{
	int		fd;
	char	*string;

	fd = open("./text.txt", O_RDONLY);
	if (fd < 0)
		printf("Reading is failed.\n");
	string = get_next_line(fd);
	printf("Read line1: %s", string);
	printf("fd: %d\n", fd);
	string = get_next_line(fd);
	printf("Read line2: %s", string);
	printf("fd: %d\n", fd);
	string = get_next_line(fd);
	printf("Read line3: %s", string);
	printf("fd: %d\n", fd);

	return (0);
}
