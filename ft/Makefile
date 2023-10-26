NAME = libftprintf.a

# Rutas a la biblioteca libft y su Makefile
LIBFT_DIR = ../libft
LIBFT_MAKEFILE = $(LIBFT_DIR)/Makefile

SRCS = ft_printf.c ft_nums.c ft_pointers.c main.c

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
REMOVE = rm -f

all: ${NAME}

$(LIBFT_MAKEFILE):
	make -C $(LIBFT_DIR)

${NAME}: $(LIBFT_MAKEFILE) ${OBJS}
		 ar rcs ${NAME} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	${REMOVE} ${OBJS}

fclean: clean
		${REMOVE} ${NAME}

re: fclean all

.PHONY:	all clean fclean re
