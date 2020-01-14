/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvideira <tvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 04:47:19 by tvideira          #+#    #+#             */
/*   Updated: 2020/01/14 04:47:23 by tvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	test_strlen(void)
{
	printf("\nstrlen\n");
	printf("-------------------MINE-------------------\n");
	printf("%zu \n", ft_strlen("Hello"));
	printf("%zu \n", ft_strlen("Hello World !"));
	printf("-------------------TRUE-------------------\n");
	printf("%zu \n", strlen("Hello"));
	printf("%zu \n", strlen("Hello World !"));
}

void	test_strcpy(void)
{
	char dst[30];

	printf("\nstrcpy\n");
	printf("-------------------MINE-------------------\n");
	printf("%s \n", ft_strcpy(dst, "Hello"));
	printf("%s \n", ft_strcpy(dst, "Hello World !"));
	printf("-------------------TRUE-------------------\n");
	printf("%s \n", strcpy(dst, "Hello"));
	printf("%s \n", strcpy(dst, "Hello World !"));
}

void	test_strcmp(void)
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
