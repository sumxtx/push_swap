
all:
	gcc -g -Wall -Wextra -Werror\
		-I./includes \
		-I./Libft/includes \
		-I./Libft/ft_printf/includes \
		-I./Libft/get_next_line/includes \
		./src/push_swap.c ./src/a_stack_fill.c ./src/lists.c\
		Libft/libftall.a
