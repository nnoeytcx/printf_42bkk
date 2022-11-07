# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 10:02:01 by tpoungla          #+#    #+#              #
#    Updated: 2022/11/07 10:02:01 by tpoungla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall  -Wextra -Werror

SRCS = ft_putnbr.c ft_putchar.c

OBJS := $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME)
re: fclean all