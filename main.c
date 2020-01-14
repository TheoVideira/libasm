/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvideira <tvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:41:45 by tvideira          #+#    #+#             */
/*   Updated: 2020/01/14 04:35:24 by tvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void    test_strlen(void)
{
    printf("\nstrlen\n");
    printf("-------------------MINE-------------------\n");
    printf("%zu \n", ft_strlen("Hello"));
    //printf("%zu \n", ft_strlen(NULL));
    printf("%zu \n", ft_strlen("Hello World !"));
    printf("-------------------TRUE-------------------\n");
    printf("%zu \n", strlen("Hello"));
    //printf("%zu \n", strlen(NULL));
    printf("%zu \n", strlen("Hello World !"));
}

void    test_strcpy(void)
{
    char dst[30];

    printf("\nstrcpy\n");
    printf("-------------------MINE-------------------\n");
    //dst = malloc(sizeof(char) * 6);
    printf("%s \n", ft_strcpy(dst, "Hello"));
    //free(dst);
    //dst = malloc(sizeof(char) * 15);
    printf("%s \n", ft_strcpy(dst, "Hello World !"));
    //free(dst);
    printf("-------------------TRUE-------------------\n");
    //dst = malloc(sizeof(char) * 6);
    printf("%s \n", strcpy(dst, "Hello"));
    //free(dst);
    //dst = malloc(sizeof(char) * 15);
    printf("%s \n", strcpy(dst, "Hello World !"));
    //free(dst);
}

void    test_strcmp(void)
{
	printf("\nstrcmp\n");
	printf("-------------------MINE-------------------\n");
	printf("%d \n", ft_strcmp("Hello", "Hello"));
	printf("%d \n", ft_strcmp("\200", "\0"));
	printf("%d \n", ft_strcmp("Aello World !", "H"));
	printf("-------------------TRUE-------------------\n");
	printf("%d \n", strcmp("Hello", "Hello"));
	printf("%d \n", strcmp("\200", "\0"));
	printf("%d \n", strcmp("Aello World !", "H"));
}

void    test_write(void)
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

void    test_read(void)
{
    char buffer[100];

	int fdm = open("ft_read.s", O_RDONLY);
	int fdt = open("ft_read.s", O_RDONLY);

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

void    test_strdup(void)
{
    char *dst = NULL;

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


int main(void)
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
	test_read();
	test_strdup();
	return (0);
}