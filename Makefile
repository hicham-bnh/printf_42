SRC = ft_format.c ft_nbr.c ft_print.c ft_printf.c ft_utils.c\

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

DEP = $(OBJ:.o=.d)

NAME = libftprintf.a

OBJ = $(SRC:.c=.o)

.PHONY: all re fclean clean

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

clean: 
		rm -rf $(OBJ) $(DEP)

fclean: clean
		rm -f $(NAME)

re: fclean all

-include $(DEP)
