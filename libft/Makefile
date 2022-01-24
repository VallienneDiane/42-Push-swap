# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 15:08:54 by dvallien          #+#    #+#              #
#    Updated: 2022/01/13 14:27:20 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= 	ft_atoi.c			\
		ft_lstadd_back.c	\
		ft_lstlast.c		\
		ft_lstbeforelast.c	\
		ft_lstnew.c			\
		ft_lstsize.c		\
		ft_lstclear.c		\
		ft_split.c 			\
		ft_calloc.c			\
		ft_bzero.c 			\

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCS = libft.h

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME)	: $(OBJS)
		ar rcs $@ $(OBJS)

%.o : %.c $(INCS)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re