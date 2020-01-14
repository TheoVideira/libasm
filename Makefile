NAME	=   libasm.a
SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s
OBJS	=	$(SRCS:.s=.o)
LIBC	= ar -rcs

.s.o:
	nasm -f macho64 $< -o $@ 

$(NAME): ${OBJS}
	${LIBC} $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

test:
	gcc -Wall -Wextra -Werror main.c tests*.c libasm.a 

re: fclean all

.PHONY: all clean fclean test re