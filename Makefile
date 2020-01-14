NAME	=   libasm
LIB		=   $(NAME).a
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
	${LIBC} $(LIB) $(OBJS)

all: $(NAME)

clean:
	rm -f $(NAME) $(OBJS) $(OBJS_B)
    
fclean: clean
	$(RM) $(NAME)
    
re: fclean all

.PHONY: all bonus clean fclean re