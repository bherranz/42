NAME = libft.a
BONUS_NAME = .bonus
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
 		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
#generar ejecutables
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}
#compilador y flags de compilación
CC = gcc
CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
#regla para crear la librería principal
all: ${NAME}
#regla para crear el bonus
bonus: ${BONUS_NAME}

${NAME}: ${OBJS}
		 ar rcs ${NAME} ${OBJS}
# regla para compilar archivos a ejecutables
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
#para limpiar archivos
clean:
		${REMOVE} ${OBJS} ${BONUS_OBJS}
#elimina los archivos y las librerías
fclean: clean
		${REMOVE} ${NAME} ${BONUS_NAME}
#borrar y rehacer
re: fclean all

${BONUS_NAME}: ${NAME} ${BONUS_OBJS}
		 ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}
		 ar rcs ${BONUS_NAME} ${OBJS} ${BONUS_OBJS}

#para especificar que son tareas, no archivos
.PHONY:	all clean fclean re bonus
