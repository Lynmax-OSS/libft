SRC= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
	 ft_tolower.c ft_toupper.c ft_atoi.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c\
	 ft_strchr.c ft_strrchr.c ft_strnstr.c

CFLAGS= -Wall -Wextra -Werror

NAME=libft.a
SO_NAME=libft.so

OBJ=$(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar	rcs $(NAME) $(OBJ)

so:	$(OBJ)
	$(CC) -nostartfiles -fPIC -shared -o $(SO_NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(SO_NAME)

re: fclean all

.Phony: clean all