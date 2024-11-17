NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
HDRS = includes/ft.h
GCC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar -crs
RM = rm -rf

all:				$(NAME)

$(NAME):			$(OBJS) 
					$(AR) $(NAME) $(OBJS)

srcs/ft_putchar.o: 	srcs/ft_putchar.c $(HDRS)
					$(GCC) $(FLAGS) -I./includes -c $< -o $@

srcs/ft_swap.o:		srcs/ft_swap.c $(HDRS)
					$(GCC) $(FLAGS) -I./includes -c $< -o $@

srcs/ft_putstr.o:	srcs/ft_putstr.c $(HDRS)
					$(GCC) $(FLAGS) -I./includes -c $< -o $@

srcs/ft_strlen.o:	srcs/ft_strlen.c $(HDRS)
					$(GCC) $(FLAGS) -I./includes -c $< -o $@

srcs/ft_strcmp.o:	srcs/ft_strcmp.c $(HDRS)
					$(GCC) $(FLAGS) -I./includes -c $< -o $@

re:			fclean all

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

.PHONY:	
			all clean fclean re