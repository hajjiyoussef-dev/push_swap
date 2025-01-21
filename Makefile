NAME = push_swap
NAME_B = checker

SRC = ./mandatory/push_swap.c ./mandatory/push_swap_help.c ./mandatory/parsing.c ./mandatory/ft_swap.c \
		./mandatory/ft_strjoin.c ./mandatory/ft_split.c ./mandatory/ft_lists.c ./mandatory/ft_give_the_stack_index.c \
		./mandatory/ft_error.c ./mandatory/ft_atoi.c  ./mandatory/ft_sort_three.c  ./mandatory/ft_rotate.c ./mandatory/ft_reverse_rotate.c \
		./mandatory/ft_sort_five.c ./mandatory/ft_push.c ./mandatory/ft_big_sort_help.c ./mandatory/ft_big_sort.c ./mandatory/ft_index_moves.c \
		./mandatory/ft_final_sort.c ./mandatory/ft_move_type.c
		 
		
SRC_BON = ./bonus/checker_help.c ./bonus/checker.c ./bonus/ft_atoi_checker.c ./bonus/ft_lsts_checker.c \
			./bonus/ft_push_checker.c ./bonus/ft_reverse_rotate_checker.c ./bonus/ft_rotate_checker.c \
			./bonus/ft_split_checker.c ./bonus/ft_strncmp.c ./bonus/ft_strjoin_checker.c ./bonus/ft_swap_checker.c\
			./bonus/get_next_line_bouns.c ./bonus/get_next_line_help_bouns.c ./bonus/parsing_bonus.c ./bonus/ft_error_checker.c\
			./bonus/ft_stor_moves.c

OBJS = ${SRC:.c=.o}
BON_OBJS = ${SRC_BON:.c=.o}
CC = cc  
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf


%.o : %.c ./bonus/checker.h  ./mandatory/push_swap.h
	@${CC} ${CFLAGS} -c $<  -o $@

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} -o ${NAME} ${OBJS}


${NAME_B}: ${BON_OBJS}
		@${CC} ${CFLAGS} -o ${NAME_B} ${BON_OBJS}

all: ${NAME}

bonus: ${NAME_B}

clean:
	@${RM} ${OBJS} ${BON_OBJS}
	
fclean : clean
	@${RM} ${NAME} ${NAME_B}

re : fclean all 

.PHONY: all clean boonus