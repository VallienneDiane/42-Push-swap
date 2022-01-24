# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 15:08:54 by dvallien          #+#    #+#              #
#    Updated: 2022/01/11 12:21:23 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INCS = ./includes/pushswap.h

LIBFTAR = ./libft/libft.a

SRCS=   ./srcs/main.c							\
		./srcs/actions/ft_swap.c				\
		./srcs/actions/ft_push.c				\
		./srcs/actions/ft_rotate.c				\
		./srcs/actions/ft_reverse_rotate.c		\
		./srcs/stack/ft_stacknew.c				\
		./srcs/stack/ft_stackadd_back.c			\
		./srcs/stack/ft_stackbeforelast.c		\
		./srcs/stack/ft_stackclear.c			\
		./srcs/stack/ft_stacklast.c				\
		./srcs/stack/ft_stacksize.c				\
		./srcs/ft_sort_small_stack.c 			\
		./srcs/ft_sort_large_stack.c 			\
		./srcs/ft_sort_five.c					\

OBJS = $(SRCS:.c=.o)
	  
CC = gcc

FLAGS = -Wall -Werror -Wextra

all : libft $(NAME) 

libft : 
		make -C ./libft

$(NAME)	: $(OBJS) $(LIBFTAR)
		${CC} ${OBJS} ${LIBFTAR} -o ${NAME}

%.o : %.c $(INCS)
		$(CC) $(FLAGS) -c $< -o $@
		
clean :
		rm -f $(OBJS)
		make clean -C ./libft

fclean : clean
		rm -f $(NAME)
		rm -f $(LIBFTAR)

re : fclean all

.PHONY : all clean fclean re libft