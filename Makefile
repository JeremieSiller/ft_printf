CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

INCLUDES = printf.h

NAME = libftprintf.a
SOURCES = arguement.c ft_atoi.c ft_char.c ft_memcpy.c ft_percentage.c ft_pointer.c  ft_printf.c ft_store.c ft_strchr.c ft_strdup.c ft_string.c ft_unsigned.c utility.c ft_integer.c ft_itoa.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

bonus: all

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCLUDES)
	
$(NAME): $(OBJECTS)
	ar cr $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
