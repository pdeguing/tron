# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/10 17:38:43 by pdeguing          #+#    #+#              #
#    Updated: 2018/08/10 18:25:55 by pdeguing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tron
CFLAG = -Wall -Wextra -Werror
SRC = tron.c
INCLUDES = -I /minilibx -I /libft
LIB = -lmlx -L./minilibx/ -lft -L./libft/ 
MLX = minilibx/minilibx.a
LIBFT = libft/libft.a
FRAMEWORK = -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): lib 
	gcc -o $(NAME) $(CFLAG) $(INCLUDES) $(SRC) $(LIB) $(FRAMEWORK) 

lib: $(MLX) $(LIBFT)

$(MLX):
	cd minilibx/ && make

$(LIBFT):
	cd libft/ && make

clean:
	/bin/rm -f *.o
	cd minilibx/ && make clean
	cd ../libft/ && make clean

fclean: clean
	/bin/rm -f $(NAME)
	cd libft/ && make fclean

re: fclean all

.PHONY: clean fclean all re
