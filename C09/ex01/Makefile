I		= includes/ft.h
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
HEAD	= includes
AR		= ar -r
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM 		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean: 
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
