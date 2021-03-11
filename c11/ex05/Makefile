# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 19:54:07 by bharghaz          #+#    #+#              #
#    Updated: 2021/03/01 19:54:10 by bharghaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRC		= ft_atoi.c ft_strcmp.c ft_putnbr.c doop.c operators.c
OBJ	= ${SRC:.c=.o}
	

${NAME}: 	${OBJ}
			gcc -Wall -Wextra -Werror -o ${NAME} ${OBJ}

all:		${NAME}

clean:
			rm -rf ${OBJ}

fclean:		clean
			rm -rf ${NAME}

.PHONY: 	all clean fclean

