/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:25:31 by ziloughm          #+#    #+#             */
/*   Updated: 2024/09/18 18:53:55 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include "string.h"

void		ft_check_strlen(void)
{
	printf("\033[36m********************************************\033[00m\n");
	printf("\033[36m		FT_STRLEN 				\033[00m\n\n");
	printf("\033[36m Test with null\033[00m\n");
	printf(" %d \n", (int)ft_strlen(NULL));
	printf("\033[36m Libasm\033[00m |%zd|\n", ft_strlen(""));
	printf("\033[36m STRING \033[00m|%zd|\n\n", strlen(""));
	printf("\033[36m Libasm\033[00m |%zd|\n", ft_strlen("Hello word"));
	printf("\033[36m STRING \033[00m|%zd|\n\n", strlen("Hello word"));
	printf("\033[36m Libasm\033[00m |%zd|\n", ft_strlen("a"));
	printf("\033[36m STRING \033[00m|%zd|\n\n", strlen("a"));
	printf("\033[36m********************************************\033[00m\n");
}

void		ft_check_strcpy(void)
{
	char str1[] = "str1";
	char str2[] = "str2";
	char str3[] = "3";
	char str4[] = "4";
	char str5[] = "";
	printf("\033[36m********************************************\033[00m\n");
	printf("\033[36m		FT_STRCPY 				\033[00m\n\n");
	printf("\033[36m Test with null\033[00m\n");
	printf(" |%s| \n\n", ft_strcpy(str1, NULL));
	printf("\033[36m Libasm\033[00m |%s|\n", ft_strcpy(str1, str2));
	printf("\033[36m STRCPY \033[00m|%s|\n\n", strcpy(str1, str2));
	printf("\033[36m Libasm\033[00m |%s|\n", ft_strcpy(str3, str4));
	printf("\033[36m STRCPY \033[00m|%s|\n\n", strcpy(str3, str4));
	printf("\033[36m Libasm\033[00m |%s|\n", ft_strcpy(str4, str5));
	printf("\033[36m STRCPY \033[00m|%s|\n\n", strcpy(str4, str5));
	printf("\033[36m********************************************\033[00m\n");
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	ft_check_strlen();
	ft_check_strcpy();
	return (0);
}
