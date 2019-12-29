/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvideira <tvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:41:45 by tvideira          #+#    #+#             */
/*   Updated: 2019/12/29 19:41:29 by tvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>
#include <stdlib.h>

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

int main(void)
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	return (0);
}