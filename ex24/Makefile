# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achambon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 21:47:30 by achambon          #+#    #+#              #
#    Updated: 2016/11/22 23:19:50 by achambon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc -c
CFLAGS = -Wall -Werror -Wextra
HEADER = -I/./includes/
SRC = $(WHERESRC)ft_putchar.c $(WHERESRC)ft_putstr.c $(WHERESRC)ft_strcmp.c\
	  $(WHERESRC)ft_strlen.c $(WHERESRC)ft_swap.c
WHERESRC = ./srcs/
FROMOTOLIB = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
LIB = libft.a

all : $(LIB)

$(LIB) :
	$(GCC) $(CFLAGS) $(HEADER) $(SRC)
	ar rc $(LIB) $(FROMOTOLIB)

clean :
	/bin/rm -f *.o

fclean :
	/bin/rm -f $(LIB)

re : fclean all

.PHONY: all clean fclean re
