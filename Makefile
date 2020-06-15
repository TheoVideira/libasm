NAME	=   libasm.a

SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s
OBJS	=	$(SRCS:.s=.o)

C_SRCS	=	main.c tests.c test_2.c

CCFLAGS	=	-Wall -Wextra -Werror
SFLAGS	=	-f elf64

.s.o:
	nasm $(SFLAGS) $< -o $@ 

$(NAME): ${OBJS}
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	rm -f a.out

test:
	gcc $(CCFLAGS) $(C_SRCS) $(NAME)

re: fclean all

.PHONY: all clean fclean test re