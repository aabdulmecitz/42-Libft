NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = ft_isalnum.c ft_memmove.c ft_put_s.c ft_putstr_fd.c ft_strlen.c \
ft_atoi.c ft_isalpha.c ft_memset.c ft_put_u.c ft_split.c ft_strmapi.c ft_tolower.c \
ft_base.c ft_isascii.c ft_printf.c ft_put_x.c ft_strncmp.c ft_toupper.c \
ft_bzero.c ft_isdigit.c ft_memchr.c ft_put_c.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c get_next_line.c \
ft_calloc.c ft_isprint.c ft_memcmp.c ft_put_d_i.c ft_putendl_fd.c ft_strlcat.c ft_strrchr.c get_next_line_utils.c \
ft_check_type.c ft_itoa.c ft_memcpy.c ft_put_p.c ft_putnbr_fd.c ft_strlcpy.c ft_strtrim.c


BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
	ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) $(BONUS_OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
