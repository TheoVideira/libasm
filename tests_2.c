/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvideira <tvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 04:46:00 by tvideira          #+#    #+#             */
/*   Updated: 2020/01/14 04:47:56 by tvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	test_write(void)
{
	printf("\nwrite\n");
	printf("-------------------MINE-------------------\n");
	printf("%ld \n", ft_write(1, "Hello", 5));
	printf("%ld \n", ft_write(1, "This is a test", 10));
	printf("%ld \n", ft_write(1, "No idea anymore", 3));
	printf("-------------------TRUE-------------------\n");
	printf("%ld \n", write(1, "Hello", 5));
	printf("%ld \n", write(1, "This is a test", 10));
	printf("%ld \n", write(1, "No idea anymore", 3));
}

void	test_read(void)
{
	char	buffer[100];
	int		fdm;
	int		fdt;

	fdm = open("ft_read.s", O_RDONLY);
	fdt = open("ft_read.s", O_RDONLY);
	printf("\nread\n");
	printf("-------------------MINE-------------------\n");
	printf("%ld \n", ft_read(fdm, buffer, 14));
	printf("%.14s\n", buffer);
	printf("%ld \n", ft_read(fdm, buffer, 15));
	printf("%.15s\n", buffer);
	printf("%ld \n", ft_read(fdm, buffer, 0));
	printf("%.0s\n", buffer);
	printf("-------------------TRUE-------------------\n");
	printf("%ld \n", read(fdt, buffer, 14));
	printf("%.14s\n", buffer);
	printf("%ld \n", read(fdt, buffer, 15));
	printf("%.15s\n", buffer);
	printf("%ld \n", read(fdt, buffer, 0));
	printf("%.0s\n", buffer);
}

void	test_strdup(void)
{
	char *dst;

	dst = NULL;
	printf("\nstrdup\n");
	printf("-------------------MINE-------------------\n");
	printf("%s \n", (dst = ft_strdup("Hello")));
	free(dst);
	printf("%s \n", (dst = ft_strdup("Hello World \nThis is me!")));
	printf("-------------------TRUE-------------------\n");
	printf("%s \n", (dst = strdup("Hello")));
	free(dst);
	printf("%s \n", (dst = strdup("Hello World \nThis is me!")));
	free(dst);
}
