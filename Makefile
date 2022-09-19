# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 09:27:33 by cvakasir          #+#    #+#              #
#    Updated: 2022/06/23 09:58:03 by cvakasir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	ft_printf.c ft_utils.c ft_conv_func.c

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
LIB		=	ar rc
RLIB	=	ranlib
OBJS	=	$(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C libfth02
	mv libfth02/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	make fclean -C libfth02

re: fclean all

.PHONY:	all clean fclean re