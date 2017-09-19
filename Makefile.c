
NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

OBJ = ft_bzero 		ft_atoi		ft_isalnum.c 	ft_isalpha.c 	ft_isascii.c \
      ft_isdigit.c 	ft_isprint.c	ft_tolower.c 	ft_memalloc.c	ft_memchr.c \
      ft_memcmp.c	ft_memcpy.c	ft_memdel.c	ft_memmove.c	ft_putchar.c\
      ft_putchar_fd.c	ft_putendl.c	ft_putendl_fd.c	ft_putnbr.c	ft_putnbr_fd.c\
      ft_putstr.c	ft_putstr_fd.c	ft_strcat.c	ft_strchr.c	ft_strclr.c\
      ft_strcmp.c	ft_strcpy.c	ft_strdel.c	ft_strdup.c	ft_strequ.c\
      ft_striter.c	ft_striteri.c	ft_strjoin.c	ft_strlcat.c	ft_strlen.c\
      ft_strmap.c	ft_strmapi.c	ft_strncat.c	ft_strncpy.c	ft_strnequ.c\
      ft_strnew.c	ft_strnstr.c	ft_strrchr.c	ft_strsplit.c	ft_strstr.c\
      ft_strsub.c	ft_strtrim.c	ft_toupper.c	ft_memccpy.c	ft_memcpy.c\
      ft_memset.c\

all : $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ @<

$(NAME) : $(OBJ)
	  ar rc $(NAME) $(OBJ)
	  ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean 
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
