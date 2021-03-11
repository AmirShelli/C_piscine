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

NAME	= cat
SRC		= ft_cat.c
OBJ	= ${SRC:.c=.o}
	

${NAME}: 	${OBJ}
			gcc -Wall -Wextra -Werror -o ${NAME} ${OBJ}

all:		${NAME}

clean:
			rm -rf ${OBJ}

fclean:		clean
			rm -rf ${NAME}

.PHONY: 	all clean fclean

