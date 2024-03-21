
SRCS		= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror

%.o: %.c libft.h
		${CC} ${CFLAGS} -I. -c $< -o $@

all:		${NAME}

$(NAME):	${OBJS} libft.h
		ar rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus