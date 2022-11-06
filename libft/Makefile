NAME = libft.a
FUNC_SRC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint\
ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy\
ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp\
ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup\
ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi\
ft_striteri ft_putchar_fd ft_ft_putstr_fd ft_putendl_fd ft_putnbr_fd

FUNC_BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

CC = cc -I ./includes
RM = rm -f
CFLAG = -Wall -Wextra -Werror -c
AR = ar rcs

ALL_FUNC = FUNC_SRC FUNC_BONUS
OBJ = $(ALL_FUNC:=.o)
SRC = $(ALL_FUNC:=.c)

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(ALL_FUNC)
		$(AR) $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

