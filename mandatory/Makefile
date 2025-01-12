NAME  = push_swap

SRC = push_swap.c push_swap_help.c parsing.c ft_swap.c \
		ft_strjoin.c ft_split.c ft_lists.c ft_give_the_stack_index.c \
		ft_error.c ft_atoi.c  ft_sort_three.c  ft_rotate.c ft_reverse_rotate.c \
		 ft_sort_five.c ft_push.c ft_big_sort_help.c ft_big_sort.c ft_index_moves.c \
		 ft_final_sort.c ft_move_type.c
		 
		


OBJS = ${SRC:.c=.o}
CC = cc 
CFLAGS = -Wall -Wextra -Werror 
AR = ar -rc
RM = rm -rf


%.o : %.c 
	${CC} ${CFLAGS} -c $<  -o $@

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} 
	
fclean : clean
	${RM} ${NAME}

re :  fclean all 

