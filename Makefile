SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJS = $(SRCS:.s=.o)

AS = nasm
ASFLAGS = -felf64

NAME = libasm
NAME_LIB = libasm.a

LD = ld
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

CSRCS = main.c

%.o: %.s
	$(AS) $(ASFLAGS) $< -o $@
	@echo "\033[0;32mLes fichiers *.o ont été bien créés!!\033[0;0m"

$(NAME) : $(OBJS)
	  	ar -rcs $(NAME_LIB) $(OBJS)
		@echo "\033[0;32mParfait !!\033[0;0m"
#		$(LD) $(OBJS) -o $(NAME_LIB)

all : $(NAME)

link: 
		$(LD) $(OBJS) -o $(NAME)

cmain:
		$(CC) $(CFLAGS) $(CSRCS) $(NAME_LIB) -o main

clean :
		rm -f $(OBJS)
		@echo "\033[0;31mles fichiers .o sont supprimés\033[0;0m"

fclean : clean
		rm -f $(NAME_LIB)
		@echo "\033[0;31mVotre programme est bien supprimé\033[0;0m"

re : fclean all

.PHONY : all clean fclean re