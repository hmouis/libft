NAME = libft.a

SRC =     ft_isdigit.c    ft_putchar_fd.c ft_strjoin.c    ft_substr.c           ft_isprint.c    ft_putendl_fd.c ft_strlcat.c    ft_tolower.c\
ft_atoi.c       ft_itoa.c       ft_putnbr_fd.c  ft_strlen.c     ft_toupper.c\
ft_bzero.c      ft_memchr.c     ft_putstr_fd.c  ft_strmapi.c\
ft_calloc.c     ft_memcmp.c     ft_split.c      ft_strncmp.c\
ft_isalnum.c    ft_memcpy.c     ft_strchr.c     ft_strnstr.c\
ft_isalpha.c    ft_memmove.c    ft_strdup.c     ft_strrchr.c\
ft_isascii.c    ft_memset.c     ft_striteri.c   ft_strtrim.c\
ft_strlcpy.c    ft_substr.c     

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
