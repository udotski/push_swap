NAME = push_swap.a
HEADER = push_swap.h
LIBFT_DIR = ../libft/
LIBFT = $(LIBFT_DIR)libft.a
FLAGS = -Wall -Wextra -Werror

SRCS =  init_stack.c push.c pop.c peek.c print_stacks.c\
	is_sorted.c is_revsorted.c \
	sa.c sb.c ss.c pa.c pb.c \
        ra.c rb.c rr.c rra.c rrb.c rrr.c \
	sort_three.c simple_sort.c optimized_sort.c radix_core.c \
	has_duplicates.c is_stempty.c is_valid_number.c \
	is_stfull.c parse_input.c get_max_bits.c get_bits.c normalize_numbers.c \
	push_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT): FORCE
	@make -C $(LIBFT_DIR)

FORCE:

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rs $(NAME) $(OBJS)
	make clean

%.o: %.c $(HEADER) Makefile
	cc $(FLAGS) -I. -I$(LIBFT_DIR) -c -o $@ $<

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re FORCE
