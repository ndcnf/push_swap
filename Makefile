CC =		cc
CFLAGS =	-Wall -Wextra -Werror #-g -fsanitize=address
NAME =		push_swap
AR =		ar rcs
SRC =		push_swap.c \
			swap.c \
			init.c \
			errors.c \
			inputs.c \
			push.c \
			rotate.c \
			reverse_rotate.c \
			algo.c \
			a_few_int.c

DIR_LIBFT =	./libft/
LIB_LIBFT =	ft
DIR_FTPRINTF = ./ft_printf/
LIB_FTPRINTF = ftprintf

OBJ =		${SRC:.c=.o}

all:		${NAME}

libs:
			@${MAKE} -sC ${DIR_FTPRINTF}
			@${MAKE} -sC ${DIR_LIBFT}

${NAME}:	${OBJ} libs
			${CC} ${CFLAGS} \
			-L${DIR_FTPRINTF} -l${LIB_FTPRINTF} \
			-L${DIR_LIBFT} -l${LIB_LIBFT} \
			${OBJ} -o ${NAME}

norm:		all
			norminette ${SRC} push_swap.h
clean:
			rm -rf ${OBJ}
			@${MAKE} -sC ${DIR_LIBFT} clean
			@${MAKE} -sC ${DIR_FTPRINTF} clean

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

test:		all
			cp push_swap ../push_swap_tester/.

.PHONY:		all clean fclean
