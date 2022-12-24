# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 18:34:10 by gpeta             #+#    #+#              #
#    Updated: 2022/12/24 16:45:00 by gpeta            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############################################
##	ARGUMENTS

NAME =			libftprintf.a
CC = 			cc
CFLAGS = 		-Wall -Wextra -Werror
NORMINETTE =	norminette -R CheckForbiddenSourceHeader *.c *.h

###############################################
##	SOURCES

SRC = 

OBJ = $(SRC:.c=.o)

# BONUS = 

# BONUS_OBJ = $(BONUS:.c=.o)

###############################################
##	RULES

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

# bonus : $(OBJ) $(BONUS_OBJ)
# 	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)

clean :
	rm -rf $(OBJ)
#	rm -rf $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re


###############################################
##	NORMINETTE : COLORMINETTE (@VEGRET)

RED          =    \033[0;91m
LIGHT_RED    =    \033[0;31m
GREEN        =    \033[0;92m
norminette :
	@$(NORMINETTE) | grep -v Norme | awk '{\
	if ($$NF == "OK!") { \
	    print "$(GREEN)"$$0"$(END)" \
	} else if ($$NF == "Error!") { \
	    print "$(RED)$(BOLD)"$$0"$(END)" \
	} else if ($$1 == "Error:") { \
	    print "$(LIGHT_RED)"$$0"$(END)" \
	} else { print }}'

###############################################
##	NORMINETTE : verif norminette (@VEGRET)

norm_verif :
	nm $(NAME)