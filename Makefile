NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra 
SRC =	ft_atoi.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_bzero.c\
		ft_memset.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

 $(NAME): $(OBJ)
	$(CC) -o $(NAME) -c $(FLAGS) $(OBJ) libft.h

#%.o : %.c
#	$(CC) -o $(OBJ) -c $(SRC)
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re