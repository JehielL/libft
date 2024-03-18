Library = libft
files = ft_strlen ft_memmove ft_memcpy ft_strlcpy ft_strlcat ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_memset ft_bzero ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr
Compiler = gcc
CmpFlags = -Wall -Wextra -Werror
OUTN = $(Library).a
OFILES = $(files:%=%.o)
NAME = $(OUTN)

$(NAME): $(OFILES)
	ar rcs $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
