NAME  = push_swap;
SRC = ./mandatory/push_swap.c ./mandatory/push_swap_help.c ./mandatory/parsing.c ./mandatory/ft_swap.c \
	./mandatory/ft_strjoin.c ./mandatory/ft_split.c ./mandatory/ft_lists ./mandatory/ft_give_the_stack_index.c \
	./mandatory/ft_error.c ./mandatory/ft_atoi.c 
OBJ = ${SRC:.c=.o}
CC = cc -Wall -Wextra -Werror
AR = ar -rc
RM = rm -rf

%.o = %.c push_swap.h
	${CC} -c $< 

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RM} ${OBJ} 
fclean : clean
	${RM} ${NAME}

re :  fclean re 

