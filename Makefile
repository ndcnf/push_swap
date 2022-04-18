CC =		CC
CFLAGS =	-Wall -Wextra -Werror #-g -fsanitize=address
NAME =		push_swap
AR =		ar rcs
SRC =		push_swap.c

DIR_LIBFT =	./libft/
LIB_LIBFT =	ft
DIR_FTPRINTF = ./ft_printf/
LIB_FTPRINTF = ftprintf

OBJ =	${SRC:.c=.o}

all:			${NAME}

${NAME_SRV}:	${OBJ}
				${CC} ${CFLAGS} \
				-L${DIR_FTPRINTF} -l${LIB_FTPRINTF} \
				-L${DIR_LIBFT} -l${LIB_LIBFT} \
				${OBJ_SRV} -o ${NAME_SRV}

libs:
				@${MAKE} -sC ${DIR_FTPRINTF}
				@${MAKE} -sC ${DIR_LIBFT}

${NAME}:		libs ${NAME}

norm:			all
				norminette ${SRC} push_swap.h
clean:
				rm -rf ${OBJ}
				@${MAKE} -sC ${DIR_LIBFT} clean
				@${MAKE} -sC ${DIR_FTPRINTF} clean

fclean:			clean
				rm -rf ${NAME}

re:				fclean all

.PHONY:			all clean fclean
