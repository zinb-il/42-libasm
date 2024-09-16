SRCS = hello.s

OBJS = $(SRCS:.s=.o)

AS = nasm

ASFLAGS = -felf64

NAME = libasm

NAME_LIB = libasm.a

LD = ld

CC = cc

CFLAGS = -Wall -Wextra -Werror

CSRCS = main.c

$(OBJS): 
		$(AS) $(ASFLAGS) $(SRCS) && $(LD) $(OBJS) -o $(NAME_LIB)
		@echo "\033[0;32mLes fichiers *.o ont été bien créés!!\033[0;0m"
		@echo "\033[0;32mParfait !!\033[0;0m"

$(NAME) : $(OBJS)
#		ar -rc $(NAME_LIB) $(OBJS)

all : $(NAME)

cmain: 
		$(CC) $(CFLAGS) $(CSRCS) -L $(NAME_LIB)

clean :
		rm -f $(OBJS)
		@echo "\033[0;31mles fichiers .o sont supprimés\033[0;0m"

fclean : clean
		rm -f $(NAME)
		@echo "\033[0;31mVotre programme est bien supprimé\033[0;0m"

re : fclean all

.PHONY : all clean fclean re