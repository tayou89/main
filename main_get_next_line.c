/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayou <tayou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:33:52 by tayou             #+#    #+#             */
/*   Updated: 2023/01/28 13:57:24 by tayou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line/get_next_line.h"

int	main(void)
{
	int		fd;
	char	*string;

	fd = open("./test.txt", O_RDONLY);
	if (fd < 0)
		printf("Reading is failed.\n");
	string = get_next_line(fd);
	printf("Read line1: %s", string);
	printf("fd: %d\n", fd);
	free(string);
	system("leaks a.out > leaks_result_temp; cat leaks_result_temp | grep leaked" && rm -rf leaks_result_temp);
	return (0);
}
/*
1. fd를 받는다.
2. buf에 메모리를 할당하다.
3. buf값과 read_size값을 구하다.
4. read_size가 0보다 작거나 같거나 buf[0]이 \n이면서 read_size가 1이면
	4.1. buf메모리를 해제하다.
	4.2. NULL을 리턴하다.
5. read_size가 0보다 클 동안 반복하다.
	5.1. backup이 없으면
		5.1.1. backup에 메모리를 할당하다.
		5.1.2. backup을 구하다.
	5.2. backup이 있으면
		5.2.1. temp를 구하다.
		5.2.2. new_backup에 메모리를 할당하다.
		5.2.3. new_backup을 구하다.
		5.2.4. temp 메모리를 해제하다.
		5.2.5. new_backup을 반환하다.
		5.2.6. backup을 구하다.
	5.3. backup에 개행이 있는지를 확인하다.
		5.3.1. 있으면 반복문을 탈출하다.
	5.4. read_size와 buf를 구하다.
6. buf메모리를 해제하다.
7. backup에 개행문자가 있는지를 확인하다.
	7.1. 개행문자가 있으면
		7.1.1. line을 구하다.
		7.1.2. backup을 구하다.
	7.2. 개행문자가 없으면
		7.1.1. line을 구하다.
		7.1.2. backup을 구하다.
8. line을 반환하다.
*/
