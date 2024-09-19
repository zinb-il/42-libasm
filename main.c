#include "libasm.h"

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

void		ft_check_strcmp(void)
{
	char str1[] = "str1";
	char str2[] = "str2";
	printf("\033[36m********************************************\033[00m\n");
	printf("\033[36m		FT_STRCMP 				\033[00m\n\n");
	printf("\033[36m Test with null\033[00m\n");
	printf(" |%d| \n\n", ft_strcmp(str1, NULL));
	printf(" |%d| \n\n", ft_strcmp(NULL, str1));
	printf("\033[36m Libasm\033[00m |%d|\n", ft_strcmp(str1, str2));
	printf("\033[36m STRCMP \033[00m|%d|\n\n", strcmp(str1, str2));
	printf("\033[36m Libasm\033[00m |%d|\n", ft_strcmp("Hello", "Hello"));
	printf("\033[36m STRCMP \033[00m|%d|\n\n", strcmp("Hello", "Hello"));
	printf("\033[36m Libasm\033[00m |%d|\n", ft_strcmp("0123", "1230"));
	printf("\033[36m STRCMP \033[00m|%d|\n\n", strcmp("0123", "1230"));
	printf("\033[36m********************************************\033[00m\n");
}

void		ft_check_write(void)
{
	printf("\033[36m********************************************\033[00m\n");
	printf("\033[36m		FT_WRITE 				\033[00m\n\n");
	printf("\033[36m Test with null\033[00m\n");
	printf(" |%ld| \n\n", ft_write(1, NULL, 0));
	printf(" |%ld| \n\n", write(1, NULL, 0));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_write(1, "Hello World !\t", 14));
	printf("\033[36m WRITE \033[00m|%ld|\n\n", write(1, "Hello World !\t", 14));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_write(-7, "Hello World !\t", 14));
	printf("\033[36m WRITE \033[00m|%ld|\n\n", write(-7, "Hello World !\t", 14));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_write(1, "Hello World !\t", 10));
	printf("\033[36m WRITE \033[00m|%ld|\n\n", write(1, "Hello World !\t", 10));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_write(1, "", 1));
	printf("\033[36m WRITE \033[00m|%ld|\n\n", write(1, "", 1));
	printf("\033[36m********************************************\033[00m\n");

}

void		ft_check_read(void)
{
	char		buf[10];

	printf("\033[36m********************************************\033[00m\n");
	printf("\033[36m		FT_READ 				\033[00m\n\n");
	printf("\033[36m Test with null\033[00m\n");
	printf(" |%ld| \n\n", ft_read(1, NULL, 0));
	printf(" |%ld| \n\n", read(1, NULL, 0));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_read(1, buf, 2));
	printf("\033[36m READ \033[00m|%ld|\n\n", read(1, buf, 2));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_read(-9, buf, 2));
	printf("\033[36m READ \033[00m|%ld|\n\n", read(-9, buf, 2));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_read(1, buf, 10));
	printf("\033[36m READ \033[00m|%ld|\n\n", read(1, buf, 10));
	printf("\033[36m Libasm\033[00m |%ld|\n", ft_read(1, buf, 1));
	printf("\033[36m READ \033[00m|%ld|\n\n", read(1, buf, 1));
	printf("\033[36m********************************************\033[00m\n");
}

void		ft_check_strdup(void)
{
	char	*dup;
	printf("\033[36m********************************************\033[00m\n");
	printf("\033[36m		FT_STRDUP 				\033[00m\n\n");
	printf("\033[36m Test with null\033[00m\n");
	printf(" |%s| \n\n", ft_strdup(NULL));
	dup = ft_strdup("ABCDEFGH");
	printf("\033[36m Libasm\033[00m |%s|\n", dup);
	free(dup);
	dup = strdup("ABCDEFGH");
	printf("\033[36m STRDUP\033[00m |%s|\n\n", dup);
	free(dup);
	dup = ft_strdup("ABCDEFGHigklmnopqrstuvwxyz");
	printf("\033[36m Libasm\033[00m |%s|\n", dup);
	free(dup);
	dup = strdup("ABCDEFGHigklmnopqrstuvwxyz");
	printf("\033[36m STRDUP\033[00m |%s|\n\n", dup);
	free(dup);
	dup = ft_strdup("");
	printf("\033[36m Libasm\033[00m |%s|\n", dup);
	free(dup);
	dup = strdup("");
	printf("\033[36m STRDUP\033[00m |%s|\n\n", dup);
	free(dup);
	printf("\033[36m********************************************\033[00m\n");
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	ft_check_strlen();
	ft_check_strcpy();
	ft_check_strcmp();
	ft_check_write();
	ft_check_read();
	ft_check_strdup();
	return (0);
}
