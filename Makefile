# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 18:58:44 by gpeta             #+#    #+#              #
#    Updated: 2022/12/21 19:02:26 by gpeta            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############################################
##	ARGUMENTS

NAME =			libftprintf.a
CC = 			gcc
CFLAGS = 		-Wall -Wextra -Werror
NORMINETTE =	norminette -R CheckForbiddenSourceHeader *.c

###############################################
##	SOURCES

SRC = ##

OBJ = $(SRC:.c=.o)

BONUS = ##

BONUS_OBJ = $(BONUS:.c=.o)

###############################################
##	RULES

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus : $(BONUS_OBJ)
	ar rc $(NAME) $(BONUS_OBJ)

clean :
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

norminette :
	$(NORMINETTE)

.PHONY : all clean fclean re