SRCS	= ft_printf.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CFLAGS	= -Wall -Werror -Wextra -Ilibft/

CC		= clang

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			${MAKE} all -C libft
			ar rcs $@ $? libft/*.o

all: ${NAME}

clean:
			${RM} ${OBJS}
			${MAKE} clean -C libft

fclean:
			${RM} ${NAME} ${OBJS}
			${MAKE} fclean -C libft

re: fclean all

.PHONY: all clean fclean re
