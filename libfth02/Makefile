# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 13:13:49 by cvakasir          #+#    #+#              #
#    Updated: 2021/07/02 10:02:30 by cvakasir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_memset.c				\
			ft_bzero.c				\
			ft_memcpy.c				\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_strlen.c				\
			ft_strdup.c				\
			ft_strlcat.c			\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strnstr.c			\
			ft_strncmp.c			\
			ft_atoi.c				\
			ft_isalpha.c			\
			ft_isdigit.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_isprint.c			\
			ft_toupper.c			\
			ft_tolower.c			\
			ft_strjoin.c			\
			ft_strlcpy.c			\
			ft_substr.c				\
			ft_strjoin.c 			\
			ft_strtrim.c			\
			ft_itoa.c				\
			ft_strmapi.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_split.c				\
			ft_calloc.c 			\

BONUS = \
	ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
	ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o \
	ft_lstmap.o
	


CC		=	gcc
FLAGS	=	-c -Wall -Wextra -Werror
LIB		=	ar rc
RLIB	=	ranlib
OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRCS)
	@$(LIB) $(NAME) $(OBJS)
	@$(RLIB) $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS)
	$(LIB) $(NAME) $(OBJS) $(BONUS)