NAME	:= libft.a
CC		:= gcc
CFLAGS	:= -Wall -Werror -Wextra -I.
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(NAME) $(B_OBJ)
	ar -rcs $(NAME) $(B_OBJ)

clean:
	@rm -rf *.o
	@echo "\nsilindi"

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
